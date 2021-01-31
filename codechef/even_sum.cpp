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
        int total=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
           for(int i=0;i<n;i++){
              total+=arr[i];
           }
           if(total%2==0){
                   cout<<"1"<<endl;
               }
               else
                    cout<<"2"<<endl;
    }
    return 0;
}