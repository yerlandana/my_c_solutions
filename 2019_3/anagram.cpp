#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    string a, b; cin>>a>>b;
    vector<char> l;
    vector<char> k;
    if(a.length() == b.length()){
        for(int i = 0; i < a.length(); i++){
            l.push_back(a[i]);
            k.push_back(b[i]);
        }
        sort(l.begin(), l.end());
        sort(k.begin(), k.end());
        for(int i = 0; i < a.length(); i++){
           if(l[i] != k[i]){
               cout<<"NO";
               return 0;
           }
        }
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}