#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    long long int sum = 0;
    cin.ignore();
    while (t--)
    {   string str;
        getline(cin, str);
        int n = stoi(str);
        int l = n%10;
        int num = n/10;
        //cout<<num<<endl;
        //cout<<l<<endl;
        sum = sum + pow(num,l);
    }
    cout<<sum;
}