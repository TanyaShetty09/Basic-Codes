#include <iostream>
using namespace std;
int main()
{
   int n,vol,inc,dec,i,j;
   cout<<"Enter the no.of test cases"<<endl;
   cin>>i;
   for(j=1;j<=i;j++)
   {
   cout<<"Enter the current volume"<<endl;
   cin>>vol;
   cout<<"Enter 1 if you want to increase the volume, Enter 2 to decrease"<<endl;
   cin>>n;
   if(n==1)
   {
       cout<<"Increase the volume to what"<<endl;
       cin>>inc;
       cout<<"Volume increased by "<<inc-vol<<endl;
   }
   else if(n==2)
   {
       cout<<"Decrease the volume to what"<<endl;
       cin>>dec;
       cout<<"Volume decreased by "<<vol-dec<<endl;
   }
   }
}