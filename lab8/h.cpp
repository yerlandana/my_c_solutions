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
    sort(d.begin(), d.end());
    int c; cin>>c;
    for(int i = 0; i < d.size(); i++){
        if(d[i] == c){cout<<"YES";return 0;}
    }
    cout<<"NO";
    return 0;
}