#include <iostream>
using namespace std;
#include <string>
int main() {
    string s;
    cin>>s;
    int n=0;
    int m =s.size();
    for(int i=0; i<s.size(); i++){
        if(s[i]==s[m-1]){
            n++;
        }
        m--;
    }
   cout<<(n==s.size()?"YES":"NO");;
  return 0;
}