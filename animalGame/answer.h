#pragma once

#include "node.h"

class Answer : Node {
public:
    Answer(std::string text = "�������");

    virtual NodeType getType();

    std::string getText();

private:
    std::string text;
};
