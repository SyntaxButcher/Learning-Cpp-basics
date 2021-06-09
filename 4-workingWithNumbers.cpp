#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    cout << 5 + 7;
    cout << 5 - 7;
    cout << 5 / 7;
    cout << 5 * 7;

    //remainder
    cout << 10 % 3 << endl;

    int wnum = 5;
    double dnum = 5.5;

    wnum++; //increment +1
    wnum--; //-1
    wnum += 80; //add 80, also -== *== /==

    //math with 2 integers = integer, math with atleast 1 decimal = float/double

    //importing cmath on top, you get access to math functions

    cout << pow(2, 5) << endl;// 2 to the power 5
    cout << sqrt(36.7) << endl ;
    cout << round(4.45) << endl ;
    cout << ceil(4.1)<< endl; //round number up
    cout << floor(4.8)<<endl; //round number down
    cout << fmax(3,10)<<endl; //return biggest number
    cout << fmin(3,10)<< endl; //return smallest number

    //find more cmath stuff online


    return 0;
}
