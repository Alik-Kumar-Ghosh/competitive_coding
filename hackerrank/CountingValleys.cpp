#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    char str[t];
    for(int i=0;i<t;i++){
        cin>>str[i];
    }
    int s=0;
    int v=0;
    for(int i=0;i<t;i++){
        if(str[i]=='U')
        {   if(s==-1)
                v++;
        s++;
        }
        else{
            s--;
        } 
    }
    cout<<v;
    return 0;
}