#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(d > a){
    cout<<a*b + (d-a)*c;
    }else{
        cout<<d*b;
    }
    return 0;
}