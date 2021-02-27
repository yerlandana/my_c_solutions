#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];

    for(int i = 0; i<n; i++){
        int s = n-i-1;
        int e = i;
       for(int j = 0; j<s; j++){
           cout<<".";
       }
       cout<<i+1;
       for(int j = 0; j<e; j++){
           cout<<".";
       }
       cout<<endl;
    }

    return 0;
}
