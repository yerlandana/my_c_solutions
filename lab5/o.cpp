#include <iostream>
using namespace std;
#include <string>
int main() {
    string s;
    cin>>s;
    int y = (int) s[0];
    for(int i =0; i< s.length(); i++){
        int k = (int) s[i];
        if(k > y){
            y = k;
        }
    }
    cout<<(char) y;
  return 0;
}