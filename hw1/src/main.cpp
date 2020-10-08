#include <iostream>
#include <random>


int main(){
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> distrib(1, 99);

    int random_number = distrib(gen);
    int guess;

    while (true) {
        std::cout << "Enter your guess:" << std::endl;
        std::cin >> guess;

        if (guess == random_number){
            std::cout << "You won" << std::endl;
            break;
        } else if (guess > random_number){
            std::cout << "Your guess is larger" << std::endl;
        } else {
            std::cout << "Your guess is smaller" << std::endl;
        }
    
    }

    return 0;
}
