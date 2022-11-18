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
    std::cout << "Введите номер счета: ";
    std::cin >> ptrPerson->id;

    std::cout << "Введите имя пользователя: ";
    std::cin >> ptrPerson->userName;

    std::cout << "Введите баланс: ";
    std::cin >> ptrPerson->balance;
}


void changeBalance(bankAccount* ptrPerson)
{
    std::cout << "Введите новый баланс: ";
    std::cin >> ptrPerson->balance;
}


void printAccInfo(bankAccount* ptrPerson)
{
    std::cout << "Ваш счет: " << ptrPerson->userName << ", " << ptrPerson->id << ", " << ptrPerson->balance << std::endl;
}


int main()
{
    setlocale(LC_ALL, "Russian");


    bankAccount newPerson;

    createNewAcc(&newPerson);
    printAccInfo(&newPerson);
    changeBalance(&newPerson);
    printAccInfo(&newPerson);
}