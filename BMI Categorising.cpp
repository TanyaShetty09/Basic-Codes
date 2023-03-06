#include <iostream>
using namespace std;
int main() 
{
    int TT,M,H,BMI;
    cout<<"Enter the no.of test cases"<<endl;
    cin>>TT;
    while(TT--)
    {
        cout<<"Enter the Mass and Height respectively"<<endl;
        cin>>M>>H;
        BMI=M/(H*H);
        if(BMI<=18)
          cout<<1<<endl;
        else if(BMI>=19&&BMI<=24)
          cout<<2<<endl;
        else if(BMI>=25&&BMI<=29)
          cout<<3<<endl;
        else if(BMI>=30)
          cout<<4<<endl;  
    }
}