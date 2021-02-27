#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int j = 1;
    while(j*j <= n){
        cout<<j*j<<endl;
        j++;
    }
    return 0;
}