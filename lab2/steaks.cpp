#include <iostream>
using namespace std;

int main(){
    int a, n;
    cin>>a>>n;
    if (a > n){
        if((a*2)%n == 0){
            cout<<(a*2)/n;
        }else{
            cout<<(a*2 +2)/n;
        }
    }else{
        cout<<2;
    }
    
    return 0;
}
