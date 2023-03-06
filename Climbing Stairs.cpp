#include <iostream>
using namespace std;
int main() 
{
    int TT,XX,YY,n,x;
    cout<<"Enter the no.of test cases"<<endl;
    cin>>TT;
    while(TT--)
    {
        n=0,x=0;
        cout<<"Enter the stair Agastya wants to reach and the no.of stairs he can climb in one move"<<endl;
        cin>>XX>>YY;
        if(XX>=YY)
        {
            while(XX>=YY)
            {
            XX=XX-YY;
            n++;
            }
            x=XX+n;
            cout<<x<<endl;
        }
        else
        cout<<XX<<endl;
    }
    return 0;
}