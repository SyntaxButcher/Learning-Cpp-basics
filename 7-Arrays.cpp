#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    int luckyNums[] = {4, 8, 15, 16, 23, 42};

    luckyNums[6] = 19;

    cout << luckyNums[6] << endl;

    int luckyNum[20] = {} ;

    luckyNum[10] = 6;

    cout << luckyNum[10] << endl;



    return 0;
}
