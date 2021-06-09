#include <iostream>

using namespace std;

int main()
{
    cout << "Shak \n is \ncoding";
    cout << " without new line here :< " << endl;

    string name = "Shakeel Ahamed";

    cout << name.length() << endl;

    cout << name[3] << endl;
    name[3] = 'l';
    cout << name << endl;
    name[3] = 'k';

    //string to find, starting position
    cout << name.find("Ahamed", 0) << endl;
    cout << name.find("kee", 0) << endl;

    //make substring: starting index, length
    cout << name.substr(3,8) << endl;
    string nameSub = name.substr(3,8);
    cout << nameSub << endl;

    return 0;

}
