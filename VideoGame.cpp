//Time taken to complete all the levels in a video game while breaks after completing 3 levels//

#include <iostream>
using namespace std;
int main() 
{
    int TT,X,Y,Z,n,c;
    cout<<"Enter the no.of test cases"<<endl;
    cin>>TT;
    while(TT--)
    { 
        cout<<"Enter the remaining levels, time taken to complete one level and the break time"<<endl;
        cin>>X>>Y>>Z;
        c=0;
        if(X>3)
        {
            n=X;
            while(n>3)
            {
                n=n-3;
                c++;
            }
            cout<<(c*Z)+(X*Y)<<endl;
        }
        else
            cout<<X*Y<<endl;
    }
}