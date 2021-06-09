#include <iostream>
#include<cmath>

using namespace std;

// we use void because it does not return any value
void sayhi()
{
    cout << "Hello User" <<endl;
}

void sayHi(string name, int age); //if you want to write function after main, you need to declare it here

int main()
{
    cout << "Top" << endl;
    sayhi();
    sayHi("shak", 23);
    cout << "Bottom" << endl;



    return 0;
}

void sayHi(string name, int age)
{
    cout << "Hello " << name << ", you are " << age << " years old" <<endl;
}
