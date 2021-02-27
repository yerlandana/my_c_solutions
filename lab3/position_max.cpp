#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector <int> n;
    int pos = 0;
    int k = -1000000000;
    for(int i = 0; i < a; i++){
        int m;
        cin>>m;
        if(m > k){
            k = m;
            pos = i;
        }
    }
    cout<<pos+1;
    return 0;
}