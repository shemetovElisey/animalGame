#pragma once
#include <string>

class Animal {
    std::string question;
    std::string answer;
    Animal* no;
    Animal* yes;

public:
    Animal(std::string question = "Ваше животное млекопитающее?", std::string answer = "", Animal* no = nullptr, Animal* yes = nullptr);

    std::string getQuestion();
    std::string getAnswer();

    Animal* getYes();
    Animal* getNo();

    void setYes(Animal* _yes);
    void setNo(Animal* _no);
};
