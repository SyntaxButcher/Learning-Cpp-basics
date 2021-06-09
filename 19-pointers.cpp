#include <iostream>
using namespace std;

/* Pointers are memory addresses, you use & to find them, type of data to find physical address in computer's ram */

int main()
{

    int agee = 19;
    double gpa = 2.7;
    string name = "Mike";

    cout << &gpa << endl;
    cout << &agee << endl;
    cout << &name << endl;

    //pointer variable, container where we store memory addresses

    int age = 19;
    int *pAge = &age;

    //remove the * if you want to get the physical memory address in your computer's ram

    cout << pAge << endl;

    // use * to dereference

    cout << *&age <<endl;
    cout << &*&age << endl;

    return 0;
}
