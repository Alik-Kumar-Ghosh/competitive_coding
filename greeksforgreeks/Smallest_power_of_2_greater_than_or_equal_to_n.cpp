#include<iostream>
#include<math.h>
using namespace std;
int power(int n){
    int tot=0,total;
    if(n==1)
        tot=1;
    for(int i=0;i<=n;i++){
        tot=pow(2,i);
        if(tot>=n){
            total=tot;
            break;
        }
    }
    return total;
}
int main()
{   int t;
    cin>>t;
    int arr[t];
    int m[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    for(int i=0;i<t;i++){
        m[i] = power(arr[i]) ;
    }
    for(int i=0;i<t;i++)
        cout<<m[i]<<endl;
    return 0;
}