#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c;
    cin>>a>>b>>c;
    a = a *100;
    c = c*100;
    double result = a;
    int n = 0;
    while(result < c){
        int k = (int)(result*b*0.01);
        result =result + k;
        n++;
    }
    cout<<n;
    return 0;
}