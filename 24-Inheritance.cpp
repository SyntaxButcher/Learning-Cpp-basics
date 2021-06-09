#include <iostream>
using namespace std;

//in this case, Chef is superclass, ItalianChef is subclass

class Chef
{
    public:
        void makeChicken()
        {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad()
        {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish()
        {
            cout << "The chef makes bbq ribs" << endl;
        }

};

class ItalianChef : public Chef //this inherits everything from Chef class
{
    public:
        void makePasta()
        {
            cout << "The chef makes pasta" << endl;
        }
        //you can override functions too like so
        void makeSpecialDish()
        {
            cout << "The chef makes chicken parm" << endl;
        }
};

int main()
{

    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef Ichef;
    Ichef.makeChicken();
    Ichef.makePasta();
    Ichef.makeSpecialDish();

    return 0;
}
