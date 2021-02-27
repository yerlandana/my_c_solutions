#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector <int> n;
    long k = 0;
    for(int i = 0; i < a; i++){
        int m;
        cin>>m;
        k = k + m;
    }
    cout<<k;
    return 0;
}