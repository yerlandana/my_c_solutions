#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int r = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int k;
            cin>>k;
            if(k<0){
                r++;
            }
        }
    }
    
    cout<<r;
    return 0;
}
