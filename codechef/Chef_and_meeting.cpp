#include <bits/stdc++.h>
using namespace std;
int print24(string str)
{   int tot;
    string s; 
    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
    if (str[6] == 'A')
    {
        if (hh == 12)
        {   s="00"; 
            s=s+str.substr(3,4);
        }
        else
        {   
            s=s+str.substr(0,2);
            s=s+str.substr(3,2);
        }
    }

    else
    {
        if (hh == 12)
        {   s="12"; 
            s=s+str.substr(3,4);
        }
        else
        {
            hh = hh + 12;
            s=to_string(hh);
            s=s+str.substr(3,4);
        }
    }
    tot=stoi(s);
    return tot;
}
int main(){
    int t;
    cin>>t; 
    cin.ignore();
    string ri,li;
    while(t--){
    string p,result={};
    getline(cin, p);
    int p_int= print24(p);
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string str;
        int li_int,ri_int;
        getline(cin, str);
        li= str.substr(0, 8);
        ri= str.substr(9,16);
        li_int=print24(li);
        ri_int=print24(ri);
      cout<<li_int<<"\n"<<ri_int<<endl<<p_int<<endl;
       if(p_int>=li_int && ri_int>=p_int){
             result+="1";
        }
        else
             result+="0";
    }
   cout<<result<<endl;
   }
    return 0;
}