#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a;
    for(int i = 0; i<n; i++){
        int k; cin>>k;
        a.push_back(k);
    }
    sort(a.begin(), a.end());
    auto iter = unique(a.begin(), a.end());
    a.erase(iter, a.end());

    for (const auto &s : a){
        if(s%2 != 0)cout<<s<<" ";
    }
    return 0;
}