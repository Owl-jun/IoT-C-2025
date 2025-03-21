#include <iostream>
#include <cstdlib>
#include <vector>

class person_data{
public:
	std::string id;
	std::string name;
	int in_money;
};

class BankApp {
	int input;
	bool flag = true;
	int index = 0;
	std::vector<person_data*> datas;
	
	void withdraw() {
		std::string findid;
		int inputmoney;
		person_data* select_Data = nullptr;

		std::cout << "[출금]" << std::endl;
		std::cout << "계좌 ID: ";
		std::cin >> findid;
		for (auto data : datas) {
			if (findid == data->id)
			{
				select_Data = data;
				break;
			}
		}
		std::cout << "출금액: ";
		std::cin >> inputmoney;
		select_Data->in_money -= inputmoney;
		std::cout << "출금완료" << std::endl;
	}

	void deposit() {
		std::string findid;
		int inputmoney;
		person_data* select_Data = nullptr;

		std::cout << "[입금]" << std::endl;
		std::cout << "계좌 ID: ";
		std::cin >> findid;
		for (auto data : datas) {
			if (findid == data->id)
			{
				select_Data = data;
				break;
			}
		}
		std::cout << "입금액: ";
		std::cin >> inputmoney;
		select_Data->in_money += inputmoney;
		std::cout << "입금완료" << std::endl;
	}

	void c_account() {
		person_data* new_Cust = new person_data;
		std::cout << "계좌 ID: ";
		std::cin >> new_Cust->id;
		std::cout << "이름: ";
		std::cin >> new_Cust->name;
		std::cout << "입금액: ";
		std::cin >> new_Cust->in_money;
		datas.push_back(new_Cust);
		
	}

	void printF() {

		for (auto d : datas) {
			std::cout << d->id << std::endl;
			std::cout << d->name << std::endl;
			std::cout << d->in_money << std::endl;
			std::cout << std::endl;
		}

	}

	void menu() {
			std::cout << "-----Menu-----" << std::endl;
			std::cout << "1. 계좌개설" << std::endl;
			std::cout << "2. 입    금" << std::endl;
			std::cout << "3. 출    금" << std::endl;
			std::cout << "4. 계좌정보 전체 출력" << std::endl;
			std::cout << "5. 프로그램 종료" << std::endl;
			std::cin >> input;
			std::cout << input;
			system("cls");	
	}

public:
	void run(){
		while (flag) 
		{
			menu();	
			switch (input)
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
				std::cout << "잘못된 입력입니다.";
				break;
			}

		}
	}
};

int main() {
	BankApp app;
	app.run();
	return 0;
}
