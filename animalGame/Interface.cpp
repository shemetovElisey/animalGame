#include <iostream>
#include "Interface.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

bool Interface::setInterface(Animal* game) {
    char a; // для хранения y/n

    // если есть объект и вопрос
    while (game != NULL && game->getQuestion() != "") {
        cout << "y - Да, n - Нет" << endl;
        cout << game->getQuestion() << endl; // задаём вопрос
        cin >> a;

        // если есть следущий элемент
        if (a == 'y' && game->getYes() != NULL)
            game = game->getYes();
        else if (a == 'n' && game->getNo() != NULL)
            game = game->getNo();
        else
            break;
    }

    // если нет ответа создаём его
    if (game->getAnswer() != "")
        cout << "Ваше животное: " << game->getAnswer() << endl; //ответ
    else {
        cout << "Похоже мы не знаем что это за животное, пожалуйста введите его: ";
        string q; // характеристика животного
        string p; // название животного
        cin >> p;
        cin.ignore(32767, '\n');
        Animal* answer = new Animal("", p); // создаём ответ
        Animal* question1 = new Animal("Ваше животное " + p + "?", "", nullptr, answer); // создаём вопрос с названием животного
        cout << "Введите его характеристику: ";
        getline(std::cin, q);
        q = "Ваше животное обладает " + q + "?";
        Animal* question2 = new Animal(q, "", nullptr, question1); // создаём вопрос с характеристикой животного

        // сохраняем вопросы
        if (a == 'y')
            game->setYes(question2);
        else
            game->setNo(question2);
    }

    cout << "Сыграем ещё?\n";
    char b;
    cin >> b;

    if (b == 'y')
        return true;
    else
        return false;
}