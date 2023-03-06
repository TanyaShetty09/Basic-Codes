#include<iostream>
using namespace std;
int main()
{
    int t,n,arr[20],sum;
    cout<<"Enter the no.of test cases"<<endl;
    cin>>t;
    while (t--)
    {
        sum=0;
        cout<<"Enter the no.of students"<<endl;
        cin>>n;
        cout<<"Enter the marks"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
           int count=0;
           for(int j=0;j<n;j++)
           {
               if(arr[i]<arr[j])
                   count++;
            }
            if(count<n-count)
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}