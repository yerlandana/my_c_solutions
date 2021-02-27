#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    int e = 0;
    int o = 0;
    for(int i = 0; i<n; i++){
        cin>>a;
        if(a%2==0){
            e++;
        }else{
            o++;
        }
    }
    cout<<e<<" "<<o;
    return 0;
}