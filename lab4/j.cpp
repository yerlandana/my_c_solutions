#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if((i+j)%2 == 0){
                int k = 0;
                cin>>k;
                a[i][j] = k + 1;
            }else{
                int k = 0;
                cin>>k;
                a[i][j] = k - 1;
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
