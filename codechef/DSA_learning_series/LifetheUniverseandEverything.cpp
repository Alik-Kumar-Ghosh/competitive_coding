#include<iostream>
using namespace std;
int main()
{   int i=900,t=0,num[i],n;
    for(i=0;;i++)
    {
           cin>>num[i];
           t++;
           if(num[i]==42)
         {  cin>>n; 
            break;
         }
     }
     for ( i = 0;i<t-1; i++)
     {
         cout<<num[i]<<endl;
     }
    
    return 0;
}