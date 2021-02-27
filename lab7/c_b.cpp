#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int a; cin>>a;
    vector <int> m;
    for(int i = 0; i < a; i++){
        int k;
        cin>>k; m.push_back(k);
    }
    int b; cin>>b;
    if(binary_search(m.begin(), m.end(), b))cout << "Yes"; else cout << "No";
    return 0;
}
