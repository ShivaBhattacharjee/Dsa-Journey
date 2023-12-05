// include all libaries of c++
#include <bits/stdc++.h>
using namespace std;

/* two types of function
i. Void function
returns nothing
ii. int function
returns integer value
*/

int main()
{
    // c++ stl is divided into 4 parts Algorithms, Containers, Functions, Iterators

    //  Containers

    //  PAIRS : Pair is a container which can store two values of different data types.
    
    pair<int, string> p = {1, "Shiva"};
    
    // access the values of P
    
    cout << p.first << " " << p.second << endl;

    // Nested pair

    pair<int, pair<int, string>> p1 = {1, {2, "Shiva"}};
    cout << p1.first << " " << p1.second.first << " "<< p1.second.second;

    // pair array
    pair<int , int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    cout<<arr[0].first<<" "<<arr[0].second<<endl;

    return 0;
}