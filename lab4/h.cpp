#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a[n][m];
    int sum =0;
    int k = 10*100;
    int o;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>a[i][j];
            sum = sum + a[i][j]; 
        }
        if(k > sum){
            k = sum;
            o=i;
        }
        sum = 0;
    }
    cout<<o+1;
    return 0;
}
