#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    int e,b; cin>>e>>b;
    for(int i = 0; i < e; i++){
        cout<<a[i]<<" ";
    }
    for(int i = b; i >= e; i--){
        cout<<a[i]<<" ";
    }
    for(int i = b+1; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
    return 0;
}