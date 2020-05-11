#include<iostream>
using namespace std; 
int main()
{   int t;
    cin>>t;
    int num[t];
    int i;
    int rev_num[t];
    for(i=0;i<t;i++)
    {
        cin>>num[i];
        rev_num[i]=0;
    }
    for(i=0;i<t;i++)
    {   while (num[i] > 0) 
        { 
            rev_num[i] = rev_num[i]*10 + num[i]%10; 
            num[i] = num[i]/10; 
        }
    }
    for (i = 0; i < t; i++)
    {
        cout<<rev_num[i]<<endl;
    }
    return 0; 
}