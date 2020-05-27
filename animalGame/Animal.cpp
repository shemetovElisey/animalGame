#include "Animal.h"

using std::string;

Animal::Animal(string _question, string _answer, Animal* _no , Animal* _yes )
    : question(_question), answer(_answer), no(_no), yes(_yes) {};

std::string Animal::getQuestion() {
    return question;
}

std::string Animal::getAnswer() {
    return answer;
}

Animal* Animal::getYes() {
    return yes;
}

Animal* Animal::getNo() {
    return no;
}

void Animal::setYes(Animal* _yes) {
    yes = _yes;
}

void Animal::setNo(Animal* _no) {
    no = _no;
}