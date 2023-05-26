/*
In C++, the "if-else" statement is a control structure used to make decisions based on certain conditions. It allows you to execute different blocks of code depending on whether a specified condition evaluates to true or false. The basic syntax of the "if-else" statement is as follows:

lets say we create a program in which it prints if user age is above 18 he or she can driver and if less he or she cannot
*/

#include<iostream>
using namespace std;
int main(){
    unsigned short age;
    cout<<"Please enter your age ";
    cin>>age;
    if(age>=18){
        cout<<"Congrats you are eligible for a driving liscense";
    }else{
        cout<<"Play with toy car kiddo ";
    }
    return 0;
}