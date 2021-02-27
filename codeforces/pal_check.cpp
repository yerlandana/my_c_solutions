#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    string a; cin>>a;
    int cnt =0;
    for( int i = 0; i< n/2; i++){
        if(a[i] != a[n-i-1]){
            cnt = cnt + n - i-i-1;
        }
    }
    cout<<cnt;
    return 0;
}