#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    int T,n,s[20],b[20],temp,k=0;
    cout<<"Enter the no.of test cases"<<endl;
    cin>>T;
    while(T--)
    { 
        cout<<"Enter the no.of horses and their skills"<<endl;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>s[i];
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                b[k]=abs(s[i]-s[j]);
                k++;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(b[i]>b[j])
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        cout<<b[0]<<endl;
    }
}
