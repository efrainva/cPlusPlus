#include <iostream>
#include <ctime>
// void return no data
// bool returns boolean
bool PlayGame (int Difficulty)
{
    std::cout << "Hello, World lol!" << Difficulty ;
    std::cout << std::endl;
    // \n = new line
    std::cout << "Wow this is c plus plus\n";
    // rand() call generates a random number
    int a = 4;
    const int b = 5;
    int c = 6;
    int sum = a + b + c;
    int multiplier = a * b * c;

    a = 9;
    // since it's a int it turn letters into intigers
    int PutIn, PutInTwo, PutInThree;

    std::cout << std::endl;
    std::cout << a + b + c;
    std::cout << std::endl;
    std::cout << sum;
    std::cout << std::endl;
    std::cout << multiplier;

    std::cout << "\n spacing \n\n";
    int PlayerTyping;

    std::cin >> PlayerTyping;
    std::cin >> PutIn;

    std::cin >> PlayerTyping;
    std::cout << std::endl;
    std::cout << "you typed: \n \n" << PlayerTyping;

    // cout stands for character out
    // cin stands for character in
    // for unreal use cammel case with every word capetilized

    // std::cout  << rand() % 10 << "\n" generates a random number between 0 and 9 because of modules making a "range"
 

    // conditional 
    if (PlayerTyping == 3)
    {
        std :: cout << "you win \n \n";
        return true;
    }
    else
    {
        std :: cout << "you lose \n\n";
        return false;
    }

}

int * getRandom()
{
    static int r[10];

    srand((unsigned)(time)(NULL));

    for (int i = 0; i < 10; i++)
    {
        r[i] = i;
        std::cout << r[i] << std::endl;
    }
    return r;
}

int main()
{
    // int Difficulty = 1;
    // const int MaxDifficulty = 10;

    // while (Difficulty <= MaxDifficulty){

    //     int Difficult;

    //     std :: cin >> Difficult;

    //     bool bLoop = PlayGame(1);
    //     std :: cin.clear();
    //     std :: cin.ignore();

    //     if (bLoop)
    //     {
    //         ++Difficulty;
    //     }
    // }

    int *pointer;

    pointer = getRandom();

    // for ( int i = 0; i < 10; i++ ) {
    //   std::cout << "*(p + " << i << ") : ";
    //   std::cout << *(pointer + i) << std::endl;
    // }
    
    return 0;

}

// run code g++ (file name) -o (output file name)