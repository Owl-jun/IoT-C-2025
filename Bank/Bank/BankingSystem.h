#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>

class person_data {
public:
    std::string id;
    std::wstring name;
    long long money;
    person_data();
    ~person_data();
};

class BankingSystem {
private:
    int inputCmd;
    long long inputMoney;
    long long drawMoney;
    bool flag;
    std::vector<person_data*> datas;

    void c_account();   // 1. ���»���
    void deposit();     // 2. �Ա�
    void withdraw();    // 3. ���
    void printF();      // 4. �������� ���
    void menu();        // �޴�UI

    person_data* find_data(std::string id);

public:
    BankingSystem();
    ~BankingSystem();
};


