#include <iostream>
#include "game.h"

#include "question.h"
#include "answer.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

Game::Game(Node* _questionTree)
    : questTree(_questionTree) {}

void Game::iterate() {
    if (questTree == nullptr) {
        return;
    }

    Node* sel = questTree;

    char answer;
    while (sel) {
        cout << ((Question*)sel)->getText() << endl; // задаём вопрос
        cout << "y - Да, n - Нет" << endl;
        cin >> answer;

        if (answer == 'y' && ((Question*)sel)->getYes())
            sel = (Node*)((Question*)sel)->getYes();
        else if (answer == 'n' && ((Question*)sel)->getNo() != NULL)
            sel = (Node*)((Question*)sel)->getNo();
        else
            break;
    }

    if (sel->getType() == NodeType::Answer) {
        cout << "Ваше животное: " << ((Answer*)sel)->getText() << endl; //ответ
    } else if (sel->getType() == NodeType::Qustion) {
        cout << "Похоже мы не знаем что это за животное, пожалуйста введите вопрос: ";
        string quest; // вопрос
        cin >> quest;
        if (answer == 'y') {
            ((Question*)sel)->setYes(new Question(quest));
        } else {
            ((Question*)sel)->setNo(new Question(quest));
        }
    }
}
