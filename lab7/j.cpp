#include <iostream>
using namespace std;

long div(string m, long res, int i){
     if(i == m.length()) return res;
     res = (m[i]-48)/2 + div(m, res, ++i);
     return res;
}

int main(){
    string m;cin>>m;
    long  r = 0; int i = 0;
    cout<<div(m, r, i);
    return 0;
}