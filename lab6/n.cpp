#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int k[a][b];
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            cin>>k[i][j];
        }
    }
    for(int j = 0; j<b; j++){
        for(int i = 0; i<a; i++){
            cout<<k[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}