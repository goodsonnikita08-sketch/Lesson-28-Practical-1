#include "Task.h"
#include <iostream>

void parseEmail() {
    std::string email;
    std::cout << "Введите email: ";
    std::getline(std::cin, email);

    auto position = email.find('@');

    if (position != std::string::npos) {
        std::string userName = email.substr(0, position);
        std::string domain = email.substr(position + 1);

        std::cout << "Имя пользователя: " << userName << '\n';
        std::cout << "Домен: " << domain << '\n';
    }
    else {
        std::cout << "Ошибка: символ '@' не найден!\n";
    }
}

void textFilter() {
    std::string sentence;
    std::string badWord;

    std::cout << "Введите предложение: ";
    std::getline(std::cin, sentence);

    std::cout << "Введите слово-паразит: ";
    std::getline(std::cin, badWord);

    auto position = sentence.find(badWord);

    if (position != std::string::npos) {
        sentence.replace(position, badWord.size(), "****");
    }

    sentence += " [Отредактировано]";

    std::cout << "Результат: " << sentence << '\n';
}