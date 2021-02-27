#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int o = 0;
    int y = 0;
    int m = a[0][0];
        for(int i = 0; i<n; i++){
            for(int j = 1; j<n; j++){
                if (a[i][j]>m){
                    m = a[i][j];
                    o = i;
                    y = j;
                }
        }
    }
    cout<<o+1<<" "<<y+1;
    return 0;
}
