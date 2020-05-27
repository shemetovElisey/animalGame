#include "question.h"

using std::string;

Question::Question(string _text, Question* _yes , Question* _no )
    : text(_text), no(_no), yes(_yes) {};

std::string Question::getText() {
    return text;
}

Question* Question::getYes() {
    return yes;
}

Question* Question::getNo() {
    return no;
}

void Question::setYes(Question* _yes) {
    yes = _yes;
}

void Question::setNo(Question* _no) {
    no = _no;
}