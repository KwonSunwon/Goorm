/**
 * @file main.cpp
 * @brief 
 * @version 0.1
 * @date 2021-06-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <random>
#include <vector>
#include <algorithm>

class Game
{
    bool continueGame; //FIXME:함수로 만들어도 될듯?
    bool winThisGame;
};

std::vector<int> genCpuNumber ();

int main()
{


}

std::vector<int> genCpuNumber ()
{
    std::vector<int> randomNumber = {0,1,2,3,4,5,6,7,8,9};

    std::random_device rd;
    std::mt19937 gen(rd());
    
    std::shuffle(randomNumber.begin(), randomNumber.end(), gen);
    
    std::vector<int> tempCpuNumber;

    for( int i = 0 ; i < 4 ; ++i )
    {
        tempCpuNumber[i] = randomNumber[i];
    }

    return tempCpuNumber;
}
