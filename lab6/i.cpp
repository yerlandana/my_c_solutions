#include <iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    for(int i = 0; i<n.length(); i++){
        if(i%2 == 0){
            if(n[i] > 96 && n[i] <123){
                n[i] = n[i] - 32;
            }
        }
    }
    cout<<n;
    return 0;
}