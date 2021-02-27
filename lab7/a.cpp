#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int rec(int n){
    if (n == 0)
        return 1; //1
    else
        return 2*rec(n-1);  //2*2*2*2*2*1 ->
}

int main(){
    int n;
    cin>>n;
    cout<<rec(n);
    //cout<<fixed<<setprecision(0)<<pow(2, n);
    return 0;
}