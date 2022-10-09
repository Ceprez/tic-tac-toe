#include <iostream>
#include <vector>

std::vector<int> trash;
char user[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
std::vector <int> bot = { 0, 1, 2, 3, 4, 5, 6, 7, 8};

void menu();
void userInput();
void botInput();
void restartBot();
void checkResult();

int main() {

    menu();

    return 0;
}

void menu() {
    std::cout << "       |       |       " << std::endl;
    std::cout << "   " << user[0] << "   |   " << user [1] << "   |   " << user[2] << "   " << std::endl;
    std::cout << "       |       |       " << std::endl;
    std::cout << "=========================" << std::endl;
    std::cout << "       |       |       " << std::endl;
    std::cout << "   " << user[3] << "   |   " << user [4] << "   |   " << user[5] << "   " << std::endl;
    std::cout << "       |       |       " << std::endl;
    std::cout << "=========================" << std::endl;
    std::cout << "       |       |       " << std::endl;
    std::cout << "   " << user[6] << "   |   " << user [7] << "   |   " << user[8] << "   " << std::endl;
    std::cout << "       |       |       " << std::endl;
    userInput();
}



void userInput() {

    int userInput;
    std::cout << "Your Choice: ";
    std::cin >> userInput;

    if (userInput > 9) {
        std::cout << "Enter 1-9" << std::endl;
        menu();
    }

    for (int i = 0; i < trash.size(); ++i) {

        if (userInput - 1 == trash[i]){
            std::cout << "Choose another option!" << std::endl;
            menu();
            break;
        }
    }

    user[userInput - 1] = 'X';
    trash.push_back(userInput - 1);
    bot.erase(std::remove(bot.begin(), bot.end(), userInput), bot.end());
    botInput();
}

void restartBot(){

    botInput();

}

void botInput() {

    int random = (rand() % 9) + 1;

    for(int i = 0; i < trash.size(); i++){

        if (random - 1 == trash[i]){
            restartBot();
            break;
        }
    }

    user[random - 1] = 'O';
    trash.push_back(random - 1);
    checkResult();

}

void checkResult(){

    std::cout << "       |       |       " << std::endl;
    std::cout << "   " << user[0] << "   |   " << user [1] << "   |   " << user[2] << "   " << std::endl;
    std::cout << "       |       |       " << std::endl;
    std::cout << "=========================" << std::endl;
    std::cout << "       |       |       " << std::endl;
    std::cout << "   " << user[3] << "   |   " << user [4] << "   |   " << user[5] << "   " << std::endl;
    std::cout << "       |       |       " << std::endl;
    std::cout << "=========================" << std::endl;
    std::cout << "       |       |       " << std::endl;
    std::cout << "   " << user[6] << "   |   " << user [7] << "   |   " << user[8] << "   " << std::endl;
    std::cout << "       |       |       " << std::endl;

    if(user[0] == 'X' && user[1] == 'X' && user[2] == 'X'){
        std::cout << "You Won!" << std::endl;
        exit(0);
    }
    else if(user[3] == 'X' && user[4] == 'X' && user[5] == 'X'){
        std::cout << "You Won!" << std::endl;
        exit(0);
    }
    else if(user[6] == 'X' && user[7] == 'X' && user[8] == 'X'){
        std::cout << "You Won!" << std::endl;
        exit(0);
    }
    else if(user[0] == 'X' && user[4] == 'X' && user[8] == 'X'){
        std::cout << "You Won!" << std::endl;
        exit(0);
    }
    else if(user[2] == 'X' && user[4] == 'X' && user[6] == 'X'){
        std::cout << "You Won!" << std::endl;
        exit(0);
    }
    else if(user[0] == 'X' && user[3] == 'X' && user[6] == 'X'){
        std::cout << "You Won!" << std::endl;
        exit(0);
    }
    else if(user[1] == 'X' && user[4] == 'X' && user[7] == 'X'){
        std::cout << "You Won!" << std::endl;
        exit(0);
    }
    else if(user[2] == 'X' && user[5] == 'X' && user[8] == 'X'){
        std::cout << "You Won!" << std::endl;
        exit(0);
    }
    else if(user[0] == 'O' && user[1] == 'O' && user[2] == 'O'){
        std::cout << "You Lost!" << std::endl;
        exit(0);
    }
    else if(user[3] == 'O' && user[4] == 'O' && user[5] == 'O'){
        std::cout << "You Lost!" << std::endl;
        exit(0);
    }
    else if(user[6] == 'O' && user[7] == 'O' && user[8] == 'O'){
        std::cout << "You Lost!" << std::endl;
        exit(0);
    }
    else if(user[0] == 'O' && user[4] == 'O' && user[8] == 'O'){
        std::cout << "You Lost!" << std::endl;
        exit(0);
    }
    else if(user[2] == 'O' && user[4] == 'O' && user[6] == 'O'){
        std::cout << "You Lost!" << std::endl;
        exit(0);
    }
    else if(user[0] == 'O' && user[3] == 'O' && user[6] == 'O'){
        std::cout << "You Lost!" << std::endl;
        exit(0);
    }
    else if(user[1] == 'O' && user[4] == 'O' && user[7] == 'O'){
        std::cout << "You Lost!" << std::endl;
        exit(0);
    }
    else if(user[2] == 'O' && user[5] == 'O' && user[8] == 'O'){
        std::cout << "You Lost!" << std::endl;
        exit(0);
    }

    userInput();

}