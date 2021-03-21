#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;

    string chars = "CAMBRIDGE";
 
    for (char c: chars) {
        s.erase(std::remove(s.begin(), s.end(), c), s.end());
    }
 
    cout << s << endl;
 
    return 0;
}