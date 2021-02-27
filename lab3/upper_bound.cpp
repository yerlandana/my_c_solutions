#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    vector <int> n;
    int k = 0;
    for(int i = 0; i < a; i++){
        int m;
        cin>>m;
        n.push_back(m);
    }
    for(int i = 0; i < a; i++){
        if(n[i]==b){
            cout<<i+1;
            break;
        }
        if(n[i]>b){
            cout<<i;
            break;
        }
        k++;
    }
    if(k >= a){
        cout<<k;
    }
    return 0;
}