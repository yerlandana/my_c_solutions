#include <iostream>
using namespace std;

int main() {
    string s;
    char k;
    int o;
    int y = 0;
    cin>>s>>k>>o;
    for(int i =0; i<s.length(); i++){
        if(s[i] == k){
            y++;
        }
    }
    cout<<(y==o?"YES":"NO");
  return 0;
}