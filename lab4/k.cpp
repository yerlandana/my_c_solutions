#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a[n][m];
    int summ =0;
    int res = 0;
    int u = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            summ = summ + a[i][j]; 
        }
        cout<<"The sum of row number "<<i+1<<" is "<<summ<<endl;
        summ = 0;
    }
    for(int j = 0; j<m;j++){
        for(int i = 0; i<n; i++){
            res = res + a[i][j]; 
        }
        u++;
        cout<<"The sum of column number "<<u<<" is "<<res<<endl;
        res = 0;
    }
    return 0;
}
