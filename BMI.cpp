#include<iostream>
using namespace std;

int main()
{
 long int t;
 cin>>t;
 while(t--){
    int bmi,w,h; 
    cin>>w;
    cin>>h;
    bmi=w/(h*h);
    if(bmi<=18)
        cout<<"1"<<endl;
    else if(bmi<=24 && bmi>=19)
        cout<<"2"<<endl;
    else if(bmi<=29 && bmi>=25)
        cout<<"3"<<endl;
    else
       cout<<"4"<<endl;
    }
    return 0;
}