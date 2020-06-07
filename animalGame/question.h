#pragma once
#include <string>

#include "node.h"

class Question : Node{
public:
    Question(std::string text = "Ваше животное млекопитающее?", Node* yes = nullptr, Node* no = nullptr);

    virtual NodeType getType();

    std::string getText();

    Node* getYes();
    Node* getNo();

    void setYes(Node* _yes);
    void setNo(Node* _no);

private:
    std::string text;
    Node* yes;
    Node* no;
};
