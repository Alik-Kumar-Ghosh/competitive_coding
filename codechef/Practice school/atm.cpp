#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int m_req;
	double total,final;
	cin>>m_req;
	cin>>total;
    if(m_req%5==0)
    {
         if((m_req)>total-0.50)
	        {
	        cout<<total;
	        }
        else{
	    final=((total-m_req) - 0.50);
	    cout <<final<<endl;
        }
	}
	else
	{
	    cout<<total;
	}
	return 0;
}
