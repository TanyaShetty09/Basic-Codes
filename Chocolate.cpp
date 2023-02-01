#include <iostream>
using namespace std;
int main()
{
    int i ,c1,c2,n;
    cout<<"Enter the no.of test cases"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
    cout<<"Enter the price of chocolate 1 and chocolate 2:"<<endl;
    cin>>c1>>c2;
    if(c1>c2)
    {
        cout<<c2<<" is cheaper"<<endl;
    }
    else if(c1<c2)
    {
        cout<<c1<<" is cheaper"<<endl;
    }
    else if(c1==c2)
    {
        cout<<"Purchase any chocolate"<<endl;
    }
    }
    return 0;
}


