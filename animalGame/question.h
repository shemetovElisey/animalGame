#pragma once
#include <string>

class Question {
public:
    Question(std::string text = "Ваше животное млекопитающее?", Question* yes = nullptr, Question* no = nullptr);

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
