#import "Interface.cpp"

int main() {
    animal *game = setupGame();
    bool g = interface(game);
    while (g)
        g = interface(game);
}
