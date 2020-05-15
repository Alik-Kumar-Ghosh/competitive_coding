#include<iostream>
using namespace std;
int main()
{   int t,i,k=0,num=0;
    cin>>t;
    int arr[t][3];
    int n[t]={0};
    for(i=0;i<t;i++)
        for(int j=0;j<3;j++)
            cin>>arr[i][j];
    for(i=0;i<t;i++)
    {   for(int j=0;j<3;j++)
        {
            n[k]=arr[i][j]+n[k];  
        }
        k++;
    } 
    for(i=0;i<t;i++)
    {    if(n[i]>1)
            num++;
    }
    cout<<num;
    return 0;
}