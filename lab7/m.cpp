#include <iostream>
using namespace std;

void nat(int n, int i){
    if(i > n) return;
    cout<<i<<" ";
    nat(n,++i);
}

int main(){
    int m;cin>>m; int i = 1;
    nat(m, i);
    return 0;
}