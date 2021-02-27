#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int k;
            cin>>k;
            if(sqrt(k) - (int)sqrt(k) == 0){
                a[i][j] = sqrt(k);
            }
            else{
                a[i][j] = k;
            }
        }
    }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
               cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
