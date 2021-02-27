#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector <int> n;
    int k = -1000000000;
    for(int i = 0; i < a; i++){
        int m;
        cin>>m;
        if(m > k){
            k = m;
        }
        n.push_back(m);
    }
    int min = n[0];
    for(int i = 0; i < a; i++){
        if(min>n[i]){
            min = n[i];
        }
    }
    for(int i = 0; i < a; i++){
        if(n[i]==k){
            n[i]=min;
        }
    }
    for(auto j : n){
        cout<<j<<" ";
    }

    return 0;
}