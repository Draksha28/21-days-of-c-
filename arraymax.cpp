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
    int i,max=0;
    int Arr[7]={1,4,6,7,8,22,54};
    for(i=0;i<7;i++)
    {
            if(max<Arr[i])
            {
                max = Arr[i];
            }
    }
    cout << max;
}

