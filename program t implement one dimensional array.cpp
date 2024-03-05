#include<iostream>
using namespace std;
int main()
{
   int i, arr[5];

   cout<<"Enter 5 elements for the array: ";
   for(i=0; i<5; i++)
      cin>>arr[i];


   cout<<"\nThe array is:\n";
   for(i=0; i<5; i++)
      cout<<arr[i]<<"\t";

   cout<<endl;
   return 0;
}
