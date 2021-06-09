#include <iostream>
using namespace std;

int getM(int num1, int num2)
{
    int result;

    if(num1 > num2) //or < or == or >= or <= or !=
    {
        result = num1;
    }
    else
    {
        result = num2;
    }

    return result;
}

int getMax(int num1, int num2, int num3)
{
    int result;

    if(num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
}

int main()
{
    cout << getM(9,7)<<endl;
    cout << getMax(7,89,72);


    return 0;
}
