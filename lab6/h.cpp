#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool even = true;
    while(n != 0){
        int m = n%10;
        if(m%2 != 0){
            even = false;
        }
        n = n/10;
    }
    cout<<(even?"Valid":"Not valid");
    return 0;
}