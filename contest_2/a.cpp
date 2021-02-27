#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a;cin>>a;
    int b[a];
    for(int i = 0; i<a; i++)cin>>b[i];
    int u = b[0];
    int k = b[0];
    for(int i = 1; i < a; i++){
        if(b[i] > u){
            u = b[i]; //min
        }
    }
    for(int i = 1; i < a; i++){
        if(b[i] < k){
            k = b[i];  //max
        }
    }
    cout<<u-k+1-a; 

}