/*Given two integers, n and m. The task is to check the relation between n and m.

Example 1:

Input:
n = 4
m = 8

Output:
lesser

Explanation:
4 < 8 so print 'lesser'.
Example 2:

Input:
n = 8
m = 8

Output:
equal

Explanation:
8 = 8 so print 'equal'.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function compareNM() which takes two integer n and m as input parameters and returns string
'lesser' if n < m
'equal' if n == m
'greater' if n > m

*/

#include<iostream>
using namespace std;
int main(){
    int n , m;
    cout<<"Enter two number please ";
    cin>>n>>m;
    if (n<m)
    {
        cout<<"Lesser";
    }else if(n==m){
        cout<<"Equal";
    }else{
        cout<<"Greater";
    }
    return 0;
}