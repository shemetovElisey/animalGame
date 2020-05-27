#pragma once
#include "node.h"

class Game {
public:
    Game(Node* questTree = nullptr);

    void iterate();

private:
    Node* questTree;
};
