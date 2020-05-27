#pragma once

#include <string>

enum class NodeType{
    Qustion,
    Answer
};

class Node {
public:
    inline Node(std::string text = "", Node* yes = nullptr, Node* no = nullptr) {}; // cant create class
    virtual NodeType getType() = 0; // cant call
};
