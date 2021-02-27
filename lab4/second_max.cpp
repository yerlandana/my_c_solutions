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
    int m = a[0][0];
        for(int i = 0; i<n; i++){
            for(int j = 1; j<n; j++){
                if (a[i][j]>m){
                    m = a[i][j];
                }
        }
    }
    int s = -100000;
    int r = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
           if(a[i][j] > s and a[i][j]<m){
               s = a[i][j];
           }
           if(a[i][j] == a[0][0]){
               r++;
           }
        }
    }
    cout<<((r == n*n)?0:s);
    return 0;
}
