#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int a[n][m];
    int sumi =0;
    int s = 10000;
    int x, y;
    int wer = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>a[i][j];
        }
    }
    cout<<"coordinates of min elements:"<<endl;
    for (int i = 0; i < m; i++) {
        int minm = a[0][i]; 
        for (int j = 1; j < n; j++) { 
            if (a[j][i] < minm){
                minm = a[j][i]; 
                wer = j;
            }
        } 
        cout<<wer+1<<";"<<i+1<<endl;
        sumi = sumi + minm;
    } 
    //cout<<endl;
    cout<<"Their sum:"<<endl<<sumi;
    // cout<<"coordinates of min elements:"<<endl;
    // for(int j = 0; j < m; j++){
    //     cout<<x+1<<";"<<j+1<<endl;
    // }
    // cout<<endl;
    // cout<<"Their sum:"<<endl<<s;
    return 0;
}
