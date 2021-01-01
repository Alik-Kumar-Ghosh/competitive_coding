#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {   int n=0;
        int d=0;
        int k=1;
        int ans=0;
        cin>>n;
        int arr[n];
        cin>>k;
        cin>>d;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        if(k==0){
            ans=1;

        }
        else
        {
           ans=sum/k;
        }
        if(ans>d){
            ans=d;
        }
        cout<<ans<<endl;
    }
    return 0;
}