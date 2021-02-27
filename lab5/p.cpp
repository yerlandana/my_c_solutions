#include <iostream>
using namespace std;
#include <string>
int main() {
    string s;
    cin>>s;
    for(int i =0; i< s.length(); i++){
        int k = (int) s[i];
        if( k != 122){
            char m =(char) (k+1);
            s[i] = m;
        }else{
            char m = (char) (k-25);
            s[i] = m;
        }
    }
    cout<<s;
  return 0;
}