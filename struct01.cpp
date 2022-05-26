// struct01.cpp :
// nazaroveg@yandex.ru

#include <iostream>
#include <string>
#include <Windows.h>
struct BankAccount
{
    int check = 0;
    std::string name;
    double amount_of_money = 0;
};

void print(BankAccount entry);
void change(BankAccount& entry);
void write(BankAccount& entry);

int main ()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);

    BankAccount entry;
    write(entry);
    print(entry);
    change(entry);
    print(entry);
}
void print(BankAccount entry)
{
    std::cout << "Ваш счёт: " << entry.name << " " << entry.check << " равен " << entry.amount_of_money << std::endl;
        
    //Ваш счёт: Андрей, 123456789, 6000
}
void change(BankAccount& entry)
{
    std::cout << "Введите новый баланс:";
    std::cin >> entry.amount_of_money;


}
void write(BankAccount& entry)
{
    std::cout << "Введите номер счёта:";
    std::cin >> entry.check;
    std::cout << "Введите имя владельца:";
    std::cin >> entry.name;
    std::cout << "Введите баланс:";
    std::cin >> entry.amount_of_money;

}
