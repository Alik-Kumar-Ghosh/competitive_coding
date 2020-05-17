#include<iostream>
using namespace std;
int series(int n){
    int tot=(n*n*n)+n;
    return tot;
}
int main(){
    int t;
    cin>>t;
    int arr[t],total[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        total[i]=series(arr[i]);
    }
    for(int i=0;i<t;i++)
    {
        cout<<total[i]<<endl;
    }
    return 0;
} 