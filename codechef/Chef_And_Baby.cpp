#include <bits/stdc++.h>
using namespace std;
int maxRepeating(string str) 
{ 
    int len = str.length(); 
    int count = 0; 
  
    // Find the maximum repeating character 
    // starting from str[i] 
    char res = str[0]; 
    for (int i=0; i<len; i++) 
    { 
        int cur_count = 1; 
        for (int j=i+1; j<len; j++) 
        { 
            if (str[i] != str[j]) 
                break; 
            cur_count++; 
        } 
  
        // Update result if required 
        if (cur_count > count) 
        { 
            count = cur_count; 
            res = str[i]; 
        } 
    } 
    return count; 
} 
  int main(){
   int t;
    cin>>t; 
    cin.ignore();
    string a;
    while(t--){
    getline(cin,a) ;
    cout<<maxRepeating(a)<<endl;}
}