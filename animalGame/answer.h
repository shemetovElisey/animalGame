#pragma once

#include "node.h"

class Answer : Node {
public:
    Answer(std::string text = "Мииишка");

    virtual NodeType getType();

    std::string getText();

private:
    std::string text;
};
