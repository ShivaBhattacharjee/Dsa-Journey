/*Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help. Given a data type, help Geek in finding the size of it in byte.

Data Type - Character, Integer, Long, Float and Double

Example 1:

Input: Character
Output: 1
Example 2:

Input: Integer
Output: 4

Your Task:

Complete the function dataTypeSize() which takes a string as input and cout<<s the size of the data type represented by the given string in byte unit.

Link to the problem = https://practice.geeksforgeeks.org/problems/data-type-1666706751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=data-type
*/

#include <iostream>
using namespace std;
int main()
{
    string type;
    cout << "Enter the type of data ";
    cin >> type;
    // Why did we use if else instead of switch in cpp we cant use switch statemnet while dealing with strings we can only use it with int
    if (type == "Character")
    {
        cout << sizeof(char);
    }
    else if (type == "Integer")
    {
        cout << sizeof(int);
    }
    else if (type == "Long")
    {
        cout << sizeof(long int);
    }
    else if (type == "Float")
    {
        cout << sizeof(float);
    }
    else if (type == "Double")
    {
        cout << sizeof(double);
    }
    else
    {
        cout << -1;
    }

    return 0; // program execuuted successfullly
}