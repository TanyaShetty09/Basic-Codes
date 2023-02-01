#include <iostream>
using namespace std;
int main()
{
   int a[100],n,i;
   cout<<"Enter N:"<<endl;
   cin>>n;
   cout<<"Enter the elements pf the array:"<<endl;
   for(i=0;i<n;i++)
     cin>>a[i];
   cout<<"Given array:"<<endl;
   for(i=0;i>n;i++)
     cout<<a[i];
   cout<<"Reverse ordered array:"<<endl;
   for(i=n;i>0;i--)
     cout<<a[i];
   return 0;
}
