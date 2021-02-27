#include <iostream>
using namespace std;
#include <string>
int main() {
    string s;
    cin>>s;
    bool p = true;
    //s = s + s[0];
    int n=0;
    int m =s.size();
    for(int i=0; i<s.size(); i++){
        if(s[i]!=s[m-i-1]){
            p = false;
        }
    }
   if(p){
       cout<<"YES";
   }else{
        s = s + s[0];
        int n=0;
        int m =s.size();
        for(int i=0; i<s.size(); i++){
            if(s[i]!=s[m-i-1]){
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
   }
  return 0;
}