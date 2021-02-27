#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int h[a][b];
    int l = 0;
    int p = 0;
    for(int i = 0; i < a; i++){
        for(int j = 0; j  < b; j++){
            cin>>h[i][j];
        }
    }
    int k = 0;
    for(int i = 0; i < a; i++){
        for(int j = 0; j  < b; j++){
            if(h[i][j] == c){
                p = 1;
                break;
            }
        }
        if(p == 1){ 
            l++;
            p = 0;
        }
    }
    cout<<l;
    return 0;
}