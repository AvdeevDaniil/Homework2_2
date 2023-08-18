#include <iostream>
#include <string>


struct bankAccount
{
    int id = 0;
    std::string userName;
    double balance = 0;
};


void createNewAcc(bankAccount* ptrPerson)
{
    std::cout << "\nВведите номер счета: ";
    std::cin >> ptrPerson->id;

    std::cout << "\nВведите имя пользователя: ";
    std::cin >> ptrPerson->userName;

    std::cout << "\nВведите баланс: ";
    std::cin >> ptrPerson->balance;
}


void changeBalance(bankAccount* ptrPerson)
{
    std::cout << "\nВведите новый баланс: ";
    std::cin >> ptrPerson->balance;
}


void printAccInfo(bankAccount* ptrPerson)
{
    std::cout << "\nВаш счет: " 
        << "\nИмя пользователя: " << ptrPerson->userName
        << "\nID пользователя: " << ptrPerson->id
        << "\nБаланс: " << ptrPerson->balance << std::endl;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");


    bankAccount newPerson;

    createNewAcc(&newPerson);
    printAccInfo(&newPerson);
    changeBalance(&newPerson);
    printAccInfo(&newPerson);
}