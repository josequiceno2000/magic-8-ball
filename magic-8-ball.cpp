#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "MAGIC 8-BALL\n";

    srand(time(NULL));
    int answer = std::rand() % 10;
    
    // The different answers
    switch (answer){
        case 0:
            std::cout << "Oh yeah you betcha!\n";
            break;
        case 1:
            std::cout << "Oh jeez, I dunno.\n";
            break;
        case 2:
            std::cout << "Oh yeah you betcha!\n";
            break;
        case 3:
            std::cout << "Yah, sure, you betcha.\n";
            break;
        case 4:
            std::cout << "Well, that's a heckuva deal!\n";
            break;
        case 5:
            std::cout << "Oh, for Pete's sake, no.\n";
            break;
        case 6:
            std::cout << "Yah, you got that one right.\n";
            break;
        case 7:
            std::cout << "Oh, geez, not a chance!\n";
            break;
        case 8:
            std::cout << "Yah, looks like it.\n";
            break;
        case 9:
            std::cout << "You bet.\n";
            break;
        default:
            std::cout << "Oh yeah, no, yeah... No. Yeah... yeah no.\n";
    }

}