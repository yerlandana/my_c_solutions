#include <iostream>
using namespace std;

long fib(int m){
    if(m == 0 || m == 1)return m;
    return (fib(m-1)+fib(m-2));
}

int main(){
    int m; cin>>m;
    cout<<fib(m-1);
    return 0;
}