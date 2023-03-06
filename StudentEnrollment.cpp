//To determine if all the members in a friend group can enroll for a course or not//
#include <iostream>
using namespace std;
int main() 
{
    int TT,N,K,M;
    cout<<"Enter the no.of test cases"<<endl;
    cin>>TT;
    while(TT--)
    { 
        cout<<"Enter the no.of friends, max capacity of the course and the no.of enrolled students"<<endl;
        cin>>N>>M>>K;
        if(K+N<=M)
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
}