#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int a; cin>>a;
    vector<int> d;
    for(int i = 0; i<a; i++){
        int k; cin>>k;
        d.push_back(k);
    }
    int m; cin>>m;
    d.erase(d.begin()+m);
    for(auto i : d) cout<<i<<" ";
    return 0;
}