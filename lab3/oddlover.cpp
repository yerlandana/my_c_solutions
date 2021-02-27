#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector <int> n;
    for(int i = 0; i < a; i++){
        int m;
        cin>>m;
        if(m%2 != 0){
            n.push_back(m);
        }
    }
    for(auto j : n){
        cout<<j<<" ";
    }
    return 0;
}

