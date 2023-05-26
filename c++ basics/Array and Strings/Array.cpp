/* Why do we need array suppose we need to store multiple data of a single data type and instead of defining multiple variables we can define an array of size n 
Note:- The indexing of array stars from 0 and goes till N*/

#include<iostream>
using namespace std;
int main(){
    // without array approach we need to store 5 values
    int a , b , c , d , e; // we had to define 5 variables is it good for code readability absolutely no

    // array appraoch

    int array[5]; //what is int data type of array what is array[5] array is the name of array [5] is the maximum number of values it can hold

    // indexes inside array[5] = 0 1 2 3 4 (counting stars from 0 )

    // cout<<array[5]; //it returns 606  The reason for this unexpected output is that accessing array[5] goes to a memory location beyond the array, and the content at that location can be arbitrary, unrelated to the array.


    //how to we insert value inside an array 

    // cin>>array[0]>>array[1]>>array[2]>>array[3]>>array[4];


    // is this the optimal use of using array absolutely no we can write a for loop which will do the same job in less than a few lines

    for (int i = 0; i <5; i++)
    {
        cin>>array[i]; //much optimal approach
    }
    
    cout<<array[1]; //it retuned 1 as i printed the second index
}