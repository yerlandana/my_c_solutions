#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

bool isPrime(int k, int i = 2){
    if (k <= 2) return (k == 2) ? true : false; 
    if (k % i == 0) return false; 
    if (i * i > k)return true;  
    return isPrime(k, i + 1);
}

int main(){
    int a; cin>>a;
    vector<int> d;
    for(int i = 0; i<a; i++){
        int k; cin>>k;
        if(isPrime(k)) d.push_back(k);
    }
    int m;cin>>m;
    int cnt = 0;
    for(auto i : d){
        if (i > m) cnt++;
    }
    cout<<cnt;
    return 0;
}