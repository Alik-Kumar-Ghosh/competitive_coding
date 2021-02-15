#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        long long int arr[n];
        long long int tot;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + a);
        tot=arr[n-1]-arr[0];
        cout<<2*tot<<endl;
    }
    return 0;
}