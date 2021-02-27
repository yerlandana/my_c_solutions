#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string m;cin>>m;
    sort(m.begin(), m.end());
    cout<<m[m.length() - 1];
    return 0;
}