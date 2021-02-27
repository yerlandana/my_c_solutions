#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    int r = 0;
    for(int i = 0; i<n; i++){
        cin>>a;
        if(r < a){
            r = a;
        }
    }
    cout<<r;
    return 0;
}