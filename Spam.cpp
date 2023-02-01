#include <iostream>
using namespace std;
int main()
{
   int x,y,T;
   cout<<"Enter the no.of test cases"<<endl;
   cin>>T;
   while(T--)
   {
      cout<<"Enter following and follwers count:"<<endl;
      cin>>x>>y;
      if(x>=1&&y<=100)
      {
         if((x*10)<y)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
      }
    }
    return 0;
}