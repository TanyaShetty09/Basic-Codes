#include<iostream>
using namespace std;
int main()
{
    int t,n,a[20],k,c;
    cout<<"Enter the no.of test cases"<<endl;
    cin>>t;
    while (t--)
    {
        c=0;
        cout<<"Enter the no.of players between them and height of A and B"<<endl;
        cin>>n>>k;
        cout<<"Enter n people's height"<<endl;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]>k)
               c++;
        }
        cout<<c<<endl;
    }
    return 0;
}