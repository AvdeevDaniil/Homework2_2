#include <iostream>

enum class Program
{
    end
};

enum class Month
{
    jan = 1,
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
    system("chcp 1251");

    int input = 0;
    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> input;

        switch (input)
        {
        case(static_cast<int>(Month::jan)): 
            std::cout << "Январь\n" << std::endl;
            break;

        case(static_cast<int>(Month::feb)):
            std::cout << "Февраль\n" << std::endl;
            break;

        case(static_cast<int>(Month::mar)):
            std::cout << "Март\n" << std::endl;
            break;

        case(static_cast<int>(Month::apr)):
            std::cout << "Апрель\n" << std::endl;
            break;

        case(static_cast<int>(Month::may)):
            std::cout << "Май\n" << std::endl;
            break;

        case(static_cast<int>(Month::jun)):
            std::cout << "Июнь\n" << std::endl;
            break;

        case(static_cast<int>(Month::jul)):
            std::cout << "Июль\n" << std::endl;
            break;

        case(static_cast<int>(Month::aug)):
            std::cout << "Август\n" << std::endl;
            break;

        case(static_cast<int>(Month::sep)):
            std::cout << "Сентябрь\n" << std::endl;
            break;

        case(static_cast<int>(Month::oct)):
            std::cout << "Октябрь\n" << std::endl;
            break;

        case(static_cast<int>(Month::nov)):
            std::cout << "Ноябрь\n" << std::endl;
            break;

        case(static_cast<int>(Month::dec)):
            std::cout << "Декабрь\n" << std::endl;
            break;

        case(static_cast<int>(Program::end)):
            std::cout << "Завершение программы!\n" << std::endl;
            break;

        default:
            std::cout << "Месяца с таким номером не существует!\n" << std::endl;
        }
    } while (input != static_cast<int>(Program::end));
}