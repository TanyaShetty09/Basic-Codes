#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x,y,s,t;
     cout<<"Enter the initial coordinates, edge length of the square and time"<<endl;
     cin>>x>>y>>s>>t;
     int count=0;
     for(int i=x;i<=x+s;i++)
     {
         for(int j=y;j<=y+s;j++)
         {
             if(i+j<=t)
             {
                 count++;
             }
         }
     }
     cout<<count<<endl;
}