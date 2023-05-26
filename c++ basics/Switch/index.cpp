/*In C++, the "switch" statement is a control structure that allows you to select one of many code blocks to be executed based on the value of an expression or variable. It provides an alternative way to make decisions compared to multiple "if-else" statements.

lets seee an example print which day it is based on input lets say user inputs 1 return Monday if 7 sunday*/

#include <iostream>
using namespace std;
int main()
{
    unsigned short day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Its Monday";
        break;
    case 2:
        cout << "Its Tuesday";
        break;
    case 3:
        cout << "Its Wednesday";
        break;
    case 4:
        cout << "Its Thrusday";
        break;
    case 5:
        cout << "Its Friday";
        break;
    case 6:
        cout << "Its Saturday";
        break;
    case 7:
        cout << "Its Sunday";
        break;
    default:
        cout<<"Enter a valid day nerd";
        break;
    }
}