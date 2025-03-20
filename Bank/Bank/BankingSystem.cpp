#include <regex>

#include "BankingSystem.h"

BankingSystem::BankingSystem()
    : inputCmd()
    , inputMoney()
    , drawMoney()
    , flag(true)
    , datas()
{
    while (flag)
    {
        menu();
        switch (inputCmd)
        {
        case 1:
            c_account();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            printF();
            break;
        case 5:
            flag = false;
            break;
        default:
            std::cout << "�߸��� �Է��Դϴ�.";
            break;
        }
    }
}

BankingSystem::~BankingSystem()
{
    for (auto data : datas)
    {
        delete data;
    }
}
 
void BankingSystem::c_account() {
    person_data* new_Cust = new person_data;

    std::wregex nameptn(LR"([a-zA-Z��-�R]+)");
    std::regex numptn(R"([0-9]+)");
    std::wcout.imbue(std::locale(""));
    std::wcin.imbue(std::locale(""));
   
    while (1)
    {
        std::cout << "���� ID: ";
        std::cin >> new_Cust->id;
        if (std::regex_match(new_Cust->id, numptn))
        {
            break;
        }
        else
        {
            std::cout << "���ڸ� �Է� �����մϴ�." << std::endl;
            new_Cust->id = "";
            continue;
        }
    }
    while (1)
    {
        std::cout << "�̸�: ";
        std::wcin >> new_Cust->name;
        if (std::regex_match(new_Cust->name, nameptn))
        {
            break;
        }
        else
        {
            std::cout << "�ѱ� �Ǵ� ������ �Է����ּ���." << std::endl;
            new_Cust->name = L"";
            continue;
        }
    }
    std::cout << "�Աݾ�: ";
    std::cin >> new_Cust->money;

    datas.push_back(new_Cust);

}
person_data* BankingSystem::find_data(std::string findid) {
    person_data* select_Data = nullptr;
    for (auto data : datas) {
        if (findid == data->id)
        {
            select_Data = data;
            break;
        }
    }
    return select_Data;
}

void BankingSystem::deposit() {
    std::string findid;
    std::cout << "[�Ա�]" << std::endl;
    std::cout << "���� ID: ";
    std::cin >> findid;
    person_data* select_Data = find_data(findid);
    
    if (select_Data == nullptr)
    {
        std::cout << "�ش� ID�� ���°� �����ϴ�!" << std::endl;
        return;
    }
    std::cout << "�Աݾ�: ";
    std::cin >> inputMoney;

    select_Data->money += inputMoney;
    std::cout << "�ԱݿϷ�" << std::endl;
    inputMoney = 0;
}

void BankingSystem::withdraw() {
    std::string findid;
  
    std::cout << "[���]" << std::endl;
    std::cout << "���� ID: ";
    std::cin >> findid;
    
    person_data* select_Data = find_data(findid);
    
    if (select_Data == nullptr)
    {
        std::cout << "�ش� ID�� ���°� �����ϴ�!" << std::endl;
        return;
    }
    std::cout << "��ݾ�: (������� : 0 �Է�)" << std::endl;
    std::cin >> drawMoney;
    if (drawMoney == 0) { drawMoney = select_Data->money; }
    if ((select_Data->money - drawMoney) >= 0)
    {
        select_Data->money -= drawMoney;
    }
    else 
    {
        std::cout << "�ܾ׺���! �����ܾ� : " << select_Data->money << std::endl;
        return;
    }
    std::cout << "��ݿϷ�" << std::endl;
}

void BankingSystem::printF() {

    for (auto d : datas) {
        std::cout << d->id << std::endl;
        std::wcout << d->name << std::endl;
        std::cout << d->money << std::endl;
        std::cout << std::endl;
    }

}

void BankingSystem::menu() {
    std::cout << "-----Menu-----" << std::endl;
    std::cout << "1. ���°���" << std::endl;
    std::cout << "2. ��    ��" << std::endl;
    std::cout << "3. ��    ��" << std::endl;
    std::cout << "4. �������� ��ü ���" << std::endl;
    std::cout << "5. ���α׷� ����" << std::endl;
    std::cin >> inputCmd;
    system("cls");
}

person_data::person_data()
    : id()
    , name()
    , money()
{
}

person_data::~person_data()
{
}
