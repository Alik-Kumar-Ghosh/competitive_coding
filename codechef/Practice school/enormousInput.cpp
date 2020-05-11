#include<iostream>
using namespace std;
int main()
{
    long long int n;
    long int k,num=0;
    long long int t;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t%k==0){
            num++;
        }
    }
    cout<<num;
    return 0;
}