#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    int mn= 0;
     for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i + j == n-1){
                mn = mn + a[i][j];
            }
        }
    }
    cout<<mn;
    
    return 0;
}
