#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int odd=0,even=0;
    while (t--){
        int n;
        cin>>n;
        int odd=0,even=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
           for(int i=0;i<n;i++){
               if(arr[i]%2==0){
                   even+=1;
               }
               else
                    odd+=1;
           }
        if(even>odd){
            cout<<odd<<endl;
        }
        else    
            cout<<even<<endl;
    }
    return 0;
}