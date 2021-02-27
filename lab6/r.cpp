#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char a;
    cin>>a;
    if (a > 96){
        a = (char) a -32 ;
        cout<<a;
    }else{
        cout<<a;
    }
    return 0;
}