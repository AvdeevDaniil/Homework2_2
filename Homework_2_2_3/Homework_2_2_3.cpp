#include <iostream>
#include <string>


struct Address
{
    std::string country;
    std::string city;
    std::string street;
    int house = 0;
    int flat = 0;
    int index = 0;
};


void printAddress(Address* exem)
{
    std::cout << "Страна: " << exem->country << "\n"
        << "Город: " << exem->city << "\n"
        << "Улица: " << exem->street << "\n"
        << "Номер дома: " << exem->house << "\n"
        << "Номер квартиры: " << exem->flat << "\n"
        << "Индекс: " << exem->index << "\n";

    std::cout << std::endl;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    Address firstExem = { "Россия", "Кострома", "Полевая", 3, 79, 654783 };
    Address secondExem = { "Россия", "Киров", "Солнечная", 8, 22, 264908 };

    printAddress(&firstExem);
    printAddress(&secondExem);
}