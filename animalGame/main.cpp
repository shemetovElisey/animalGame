#include <iostream>

#include "game.h"
#include "question.h"

#include "question.h"

int main() {
    Game game((Node*)(new Question("2 == 2?")));
    while (true)
        game.iterate();
}

