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

    int cnt = 0;
    for (const auto &s : a) cnt++;
    cout<<cnt;

    return 0;
}