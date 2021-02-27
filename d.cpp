#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;



int kfib(int x, int y){
    long result = 0;
    if (x == 1) return 0;
    if (x == 2) return 1;
    result += kfib(x - 2, y) + y * kfib(x - 1, y);
    return result;
}
//////////////
int main(){
    int x, y;
    cin>>x>>y;
    cout<<abs(kfib(y, x)%10);
    return 0;
}
