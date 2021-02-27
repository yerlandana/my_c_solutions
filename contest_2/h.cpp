#include <iostream>
using namespace std;

int main(){
    char m; cin>>m;
    string a;cin>>a;
    for(int i = 0; i< a.length(); i++){
        if(a[i] != m){
            cout<<a[i];
        }
    }
    return 0;
}