#include <iostream>
#include <string>
#include<bits/stdc++.h> 
using namespace std;

string kin(int n, int k, string res){
    if(n < k){
        if(n < 10) return res + to_string(n%k);
        else{
            char m = (char)65+(n-10);
            return res + m;
        }
    }
    char f = n%k;
    if(f >= 10){
      f = (char)(65 + (f-10));
      res = f + kin(n/k, k, res);
    }else{
         res = to_string(f) + kin(n/k, k, res);
    }
    return res;
}

int main(){
    int n, k; cin>>n>>k;
    string res = "";
    if(k > n){
        if(k > 10){
            char m = (char)64+(k-10);
            cout<<m;
        }else{
            cout<<k;
        }
    }else{
        string l = kin(n, k, res);
        reverse(l.begin(), l.end());
        cout<<l;
        }
    return 0;
}