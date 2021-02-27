#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    int mn = -10000;
    int x, y;
     for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i == j){
                if(a[i][j]>mn){
                    mn = a[i][j];
                    x = i;
                    y = j;
                }
            }
        }
    }
    cout<<"Maximum element is: "<<mn<<" with coordinates: "<<x+1<<";"<<y+1;
    
    return 0;
}
