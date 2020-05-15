#include<iostream>
using namespace std;
int main()
{   int t,num,n=0;
    cin>>t>>num;
    int arr[t];
    for(int i=0;i<t;i++)
        cin>>arr[i];
    for(int i=0;i<t;i++){
        if(arr[i]>=arr[num-1] && arr[i]>0)
            n++;
    }
    cout<<n;
    return 0;
}