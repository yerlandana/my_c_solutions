#include <iostream>
#include <vector>
using namespace std;

int main(){
    int k = -1000000000;
    for(int i = 0; i < 4; i++){
        int m;
        cin>>m;
        if(m > k){
            k = m;
        }
    }
    cout<<k;
    return 0;
}