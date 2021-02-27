#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector <int> n;
    int i = 0;
    for(int i = 0; i < a; i++){
        int m;
        cin>>m;
        n.push_back(m);
    }
    for(int i = (a-1); i >= 0; i--){
        cout<<n[i]<<" ";
    }
    return 0;
}