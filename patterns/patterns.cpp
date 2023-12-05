/*
rules to solve patterns

1. Count the number of rows in the outer loop
2. Count the number of columns in the inner loop and connect rows and columns with each other (find relation)
3. print the content inside the inner loop
4. Observe symmetrty in the pattern (only applicable to a cetain type of patterns)
*/

#include <iostream>
using namespace std;

/*
pattern 1

    *****
    *****
    *****
    *****

*/

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
pattern 2

    *
    **
    ***
    ****
    *****

*/

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

/*
pattern 3

1
1 2
1 2 3
1 2 3 4

*/

void pattern3(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

/*
pattern 4
1
22
333
4444
55555
*/
void pattern4(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
/*
pattern5

*****
****
***
**
*

*/

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
/*
pattern 6
12345
1234
123
12
1
*/

void pattern6(int n){
    for(int i = 0 ; i<=n; i++){
        for(int j = 1; j<=n-i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main()
{
    pattern6(5);
    return 0;
}