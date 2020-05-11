#include<iostream>
using namespace std;
int main()
{
    int t,a,b,i;
    cin>>t;
    int sum[t];
    for(i=0;i<t;i++)
    {
        cin>>a;
        cin>>b;
        sum[i]=a+b;
    }
    for(i=0;i<t;i++)
        cout<<sum[i]<<endl;
    return 0;
}