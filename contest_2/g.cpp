#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    string a;
    cin>>a;
    int cnt = 0;
    for(int i = 0; i  < a.length(); i++){
        for(int j = i+1; j < a.length(); j++){
            if(a[i] == a[j]){
               cout<<a[i];
               break;
            }
        }
    }

    return 0;
}