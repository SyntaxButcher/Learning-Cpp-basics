#include <iostream>
using namespace std;



int main()
{
    int secretNum = 7;
    int guess;
    int guessLimit = 0;

    while(secretNum != guess && guessLimit <= 3)
    {
        cout << "Enter guess: ";
        cin >> guess;
        guessLimit++;
    }

    if(guessLimit == 4)
    {
        cout << "You Lose";
    }

    if(guessLimit < 4)
    {
    cout << "You Win";
    }


    return 0;
}
