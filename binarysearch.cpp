#include <iostream>
using namespace std;
void print(int arr[] ,int n) // array input will not be taken like arr() it will be taken like arr[] 
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i];
        cout << " ";
    }
}
void insert(int arr[] ,int n)  // when ever u use loops  u have declare the i inside the loop
{
    for(int i=0;i<n;i++) 
    {
        cout << "Value of arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "The elements of array are: ";
    print(arr,n);
}
void sort(int arr[] ,int n)
{
    int temp;
    for(int i=0;i<n;i++)
	{		
	   for(int j=i+1;j<n;j++)
		{
		     if(arr[i]>arr[j])
			 {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			 }
	    }
    }
	cout << "\nThe sorted elements of array are: ";
	print(arr,n);
}
void search(int arr[], int size, int X)
{
    int f=0;
	int l=size-1;
	int mid = (f+l)/2;
	while(f<=l)
	{
	  if(arr[mid] < X)
	  {
		 f = mid + 1;
	  }
	  else if(arr[mid] == X)
	  {
		cout<<X<<" found in the array at the location "<<mid<<"\n"; 
        break; 
      } 
      else
      { 
        l = mid - 1; 
      }
      mid=(f+l)/2;
	 }
	 if(f > l)
	 {
	     cout<<X<<" not found in the array";
	  }
}
int main()
{
    cout << "Enter the size of an array";
    int size;  // not declared 
    cin >> size;
    int arr[size]; 
    //int n = sizeof(arr)/sizeof(arr[0]); // this need not be calculated like this when u r taking the input of the array
    insert(arr,size);
    sort(arr,size);
    int X;  // not declared
    cout << "\nInput an element to search: ";
	cin >> X;
	search(arr,size,X); 
}
