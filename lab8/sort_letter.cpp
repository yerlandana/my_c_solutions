#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    string m; cin>>m;
    for(auto& c : m) c = tolower(c);
    vector<char> a;
    for(int i = 0; i < m.length(); i++) a.push_back(m[i]);
    sort(a.begin(), a.end());
    auto iter = unique(a.begin(), a.end());
    a.erase(iter, a.end());
    cout<<a.size()<<endl;
    for(auto i : a) cout<< i << " ";
    return 0;
}