#include <iostream>
using namespace std;

int main()
{
  int x,y,sum;
  const int z=10;
  cout<< "Enter x:";
  cin>> x;
  cout<< "Enter y:";
  cin>> y;
  sum=x+y+z;
  cout<<"The sum is: " << sum;
}