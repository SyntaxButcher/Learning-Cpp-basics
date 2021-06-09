#include <iostream>
using namespace std;



int main()
{
    int index = 1;
    while(index <= 5)
    {
        cout << index << endl;
        index++;
    }

    //do while loop, aren't that useful
    int indexx = 2;

    do
    {
        cout << indexx << endl;
        indexx++;
    }while(indexx <= 5);

    return 0;
}
