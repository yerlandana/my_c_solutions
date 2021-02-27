#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    int d = n-1;
    int s = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<d; j++){
            cout<<".";
        }
        for(int j = 0; j<s; j++){
            cout<<"*";
        }
        for(int j = 0; j<d; j++){
            cout<<".";
        }
        d = d - 1;
        s = s + 2;
        cout<<endl;
    }
    return 0;
}
