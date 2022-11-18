#include <iostream>


enum month
{
    end,
    jan,
    feb,
    mar,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    oct,
    nov,
    dec
};


int main()
{
    setlocale(LC_ALL, "Russian");

    int input = 0;
    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> input;

        switch (input)
        {
        case(month::end): std::cout << "До свидания!" << std::endl; break;
        case(month::jan): std::cout << "Январь" << std::endl; break;
        case(month::feb): std::cout << "Февраль" << std::endl; break;
        case(month::mar): std::cout << "Март" << std::endl; break;
        case(month::apr): std::cout << "Апрель" << std::endl; break;
        case(month::may): std::cout << "Май" << std::endl; break;
        case(month::jun): std::cout << "Июнь" << std::endl; break;
        case(month::jul): std::cout << "Июль" << std::endl; break;
        case(month::aug): std::cout << "Август" << std::endl; break;
        case(month::sep): std::cout << "Сентябрь" << std::endl; break;
        case(month::oct): std::cout << "Октябрь" << std::endl; break;
        case(month::nov): std::cout << "Ноябрь" << std::endl; break;
        case(month::dec): std::cout << "Декабрь" << std::endl; break;
        default: std::cout << "Месяца с таким номером не существует!" << std::endl;
        }
    } while (input != month::end);
}