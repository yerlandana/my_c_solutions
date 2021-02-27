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
    // cout<<d[d.size()-1]-d[0];
    int ll; cin>>ll;
    int res = 0;
    for(int i = d.size() - 1; i > d.size()- 1-ll; i--){
        res += d[i];
    }
    cout<<res;
    return 0;
}