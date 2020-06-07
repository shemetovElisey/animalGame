#include "question.h"

using std::string;

Question::Question(string _text, Node* _yes , Node* _no )
    : text(_text), no(_no), yes(_yes) {};

NodeType Question::getType() {
    return NodeType::Qustion;
}

std::string Question::getText() {
    return text;
}

Node* Question::getYes() {
    return yes;
}

Node* Question::getNo() {
    return no;
}

void Question::setYes(Node* _yes) {
    yes = _yes;
}

void Question::setNo(Node* _no) {
    no = _no;
}