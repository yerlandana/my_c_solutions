#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin>>a;
    int k[a];
    int m[a];
    for(int i = 0; i < a; i++){
        cin>>k[i];
    }
    for(int i = 0; i < a; i++){
        cin>>m[i];
    }
    for(int i = 0; i < a; i++){
        cout<<abs(k[i]-m[i])<<" ";
    }
}