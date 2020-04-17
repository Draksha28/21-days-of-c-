/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int Arr[4]={12,15,3,9};
    int i,Sum=0;
    for(i=0;i<4;i++)
    {
        cout<<Arr[i] <<"\n";
    }
    for(i=0;i<4;i++)
    {
        Sum+=Arr[i];         //using standard method(can even do it using function and recursion method)
    }
        cout<< Sum;
}

