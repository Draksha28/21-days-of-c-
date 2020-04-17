/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{   
    int i,n;
    int index;
    int Arr[6]= {13,7,8,5,9,76};
    n=13;
    for(i=0;i<5;i++)
    {
        if(n==Arr[i])
        {
            index=i;
            cout << "Element Found at index:"<< index  <<"-"  <<Arr[i];
        }
    }
}
