#pragma once
#include <string>

#include "node.h"

class Question : Node{
public:
    Question(std::string text = "Ваше животное млекопитающее?", Question* yes = nullptr, Question* no = nullptr);

    virtual NodeType getType();

    std::string getText();

    Question* getYes();
    Question* getNo();

    void setYes(Question* _yes);
    void setNo(Question* _no);

private:
    std::string text;
    Question* yes;
    Question* no;
};
