#include <iostream>
#include<string>
using namespace std;
int main() 
{
    int TT,n,i,c;
    string s;
    cout<<"Enter the no.of test cases"<<endl;
    cin>>TT;
    loop: 
    while(TT--)
    { 
        cout<<"Enter the String\n";
        cin>>s;
        n=s.size();
        c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                c++;
                if(c>2)
                {
                   cout<<"Happy\n";
                   goto loop;
                }
            }
            else
                c=0;
        }
        cout<<"Sad\n";
    }
}