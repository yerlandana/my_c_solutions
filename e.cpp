#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int formula(int n, int a){
    if(n == 1) return a;
    int count = 1;
    int k;
    for(int i = n - 1; i > 0; --i){
        if(count> 0){
            k = i;
        }
        if(n % i == 0){
            a=a+1;
            count--;
        }
    }
    return formula(k, a);
}


int main(){
    int n;cin >> n;
    cout << formula(n, 0) + 1;
}