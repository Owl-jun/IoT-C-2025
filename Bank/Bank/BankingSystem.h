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

    void c_account();   // 1. 계좌생성
    void deposit();     // 2. 입금
    void withdraw();    // 3. 출금
    void printF();      // 4. 계좌정보 출력
    void menu();        // 메뉴UI

    person_data* find_data(std::string id);

public:
    BankingSystem();
    ~BankingSystem();
};


