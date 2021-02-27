#include <iostream>
using namespace std;

int main(){
    string l; cin>>l;
    int f = 0, r= 0;
    for(int i = 0; i < l.length(); i++){
        if(l[i] == 'B')f--;
        if(l[i] == 'F') f++;
        if(l[i] == 'L') r--;
        if(l[i] == 'R') r++;
    }
    if(f < 0){
        for(int i = 0; i < abs(f); i++){
            cout<<'F';
        }
    }
    else{
        for(int i = 0; i < f; i++){
            cout<<'B';
        }
    }

    if(r < 0){
        for(int i = 0; i < abs(r); i++){
            cout<<'R';
        }
    }
    else{
        for(int i = 0; i < r; i++){
            cout<<'L';
        }
    }
    return 0;
}