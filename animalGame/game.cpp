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
    while (sel && sel->getType() == NodeType::Qustion) {
        cout << ((Question*)sel)->getText() << endl; // задаём вопрос
        cout << "y - Yes, n - No" << endl;
        cin >> answer;

        if (answer == 'y' && ((Question*)sel)->getYes())
            sel = (Node*)((Question*)sel)->getYes();
        else if (answer == 'n' && ((Question*)sel)->getNo() != NULL)
            sel = (Node*)((Question*)sel)->getNo();
        else
            break;
    }

    NodeType type = sel->getType();
    if (type == NodeType::Answer) {
        cout << "You answer: " << ((Answer*)sel)->getText() << endl; //ответ
    } else if (type == NodeType::Qustion) {
        cout << "You know that is it?" << endl;
        char isAnswer;
        cin >> isAnswer;
        if (isAnswer == 'n') {
            cout << "We dont know what is it, enter you question: ";
            string quest; // вопрос
            cin >> quest;
            if (answer == 'y') {
                ((Question*)sel)->setYes((Node*)new Question(quest));
            }
            else {
                ((Question*)sel)->setNo((Node*)new Question(quest));
            }
        } else {
            cout << "What is it?" << endl;
            string text;
            cin >> text;
            if (answer == 'y') {
                ((Question*)sel)->setYes((Node*)new Answer(text));
            }
            else {
                ((Question*)sel)->setNo((Node*)new Answer(text));
            }
        }
    }
}
