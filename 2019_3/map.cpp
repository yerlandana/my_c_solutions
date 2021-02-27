#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    map <string, int> s;
    int n; cin>>n;
    for(int i = 0; i < n; i++){
        string k; cin>>k;
        int j; cin>>j;
        s[k] = j;
    }
    
    return 0;
}