#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    string s;
    cin>>s;
    int x =0;
    for(int i =0; i<s.length(); i++){
        if(s[i] == 97 || s[i] == 101 || s[i] == 105|| s[i] == 111 || s[i] ==  117){
            x++;
        }
    }
    cout<<x;
  return 0;
}