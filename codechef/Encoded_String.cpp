#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        char alp[16];
        alp[0]='a';
        for(int i=1;i<16;i++)
        alp[i]=alp[i-1]+1;
        string ans = "";

        for(int i=0;i<n;i+=4)
        {
            string a = str.substr(i,i+4);
            int binary = stoi(a, 0, 2);
            ans += alp[binary];
        }

     cout << ans << endl;

    }

    return 0;
}