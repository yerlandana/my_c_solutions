#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int k = s[0];
    int num = 1;
    for(int i = 0; i< s.length(); i++){
        if(s[i] != k){
            k = s[i];
            num++;
        }
    }
    if(s.length()%num == 0){
    int q = ceil(s.length() / num);
    int o = 0;
    bool rep = true;
    char op = s[0];
    for(int i = 0; i < s.length(); i++){
        if(s[i] != op){
            if(o != q){
               rep = false;
           }
            op = s[i];
            //cout<<o;
            o=0;
        }
        o++;
    }
    cout<<(rep?"YES": "NO");
    }else{
        cout<<"NO";
    }
  return 0;
}
