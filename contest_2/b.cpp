#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<n-1;
    for(int i=0; i<n; i++){
        for(int j=n-1; j<(n-i-1); j--){
            cout << a[i][j];
        }
        cout<<endl;
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(i == j){
    //            cout<<a[i][j]<<" ";
    //         }
    //     }
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(i - j == m){
    //            cout<<a[i][j]<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
  return 0;
}