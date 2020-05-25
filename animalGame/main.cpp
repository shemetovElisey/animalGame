#import "Interface.cpp"

int main() {
    Animal *game = new Animal;
    Interface interface;
    bool g = interface.setInterface(game);
    while (g)
        g = interface.setInterface(game);
}

