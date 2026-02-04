#include <iostream>
void mainMenu();

int main(){
    mainMenu();
    return 0;
}

void mainMenu(){
    char choice;
    do{
        system("clear");
        //            01234567890123456789012345678901234567890123456789012345678901234567890
        std::cout << "=======================================================================\n";
        std::cout << "=                                                                     =\n";
        std::cout << "=                                                                     =\n";
        std::cout << "=                                                                     =\n";
        std::cout << "=                                                                     =\n";
        std::cout << "=                           Dungeon Climber                           =\n";
        std::cout << "=                                                                     =\n";
        std::cout << "=                                                                     =\n";
        std::cout << "=                           (1) Start Game                            =\n";
        std::cout << "=                           (2) How to Play                           =\n";
        std::cout << "=                           (3) Exit Game                             =\n";
        std::cout << "=                                                                     =\n";
        std::cout << "=                                                                     =\n";
        std::cout << "=                                                                     =\n";
        std::cout << "=                                                                     =\n";
        std::cout << "=======================================================================\n";
        std::cin >> choice;
    }while(choice != '3');
}