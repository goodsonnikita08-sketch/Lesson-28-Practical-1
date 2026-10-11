#include <iostream>
#include <Windows.h>
#include "Task.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "--- Задание 1: Парсер email ---\n";
    parseEmail();

    std::cout << "\n--- Задание 2: Текстовый фильтр ---\n";
    textFilter();

    return 0;
}