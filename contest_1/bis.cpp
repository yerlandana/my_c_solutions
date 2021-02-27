#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int a, a1, b, b1;
    cin>>a>>a1>>b>>b1;
    int c = a*10+a1;
    int m = b*10+b1;
    if(abs(a-b) == abs(a1 - b1) ||  a1+a == b1+b){
        cout<<"Won";
    }else{
        cout<<"Lose";
    }
    return 0;
}