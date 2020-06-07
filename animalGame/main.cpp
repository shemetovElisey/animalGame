#include <iostream>

#include "game.h"
#include "question.h"

#include "question.h"

int main() {
    Game game((Node*)(new Question("You animal mammals?")));
    while (true)
        game.iterate();
}

