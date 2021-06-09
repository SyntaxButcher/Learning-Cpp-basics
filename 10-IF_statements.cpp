#include <iostream>
using namespace std;


int main()
{

    bool isMale = false; // or 1 or 0 or true or false
    bool isTall = true;

    if (isMale && isTall)
    {
        cout << "You are a tall male \n";
    }
    else if(isMale && !isTall)
    {
        cout << "You are a short male \n";
    }
    else if(!isMale && isTall)
    {
        cout << "You are a tall female \n";
    }
    else
    {
        cout << "You are not male \n";
    }

    if (isMale || isTall)
    {
        cout << "You are tall or male";
    }

    return 0;
}
