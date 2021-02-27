#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    double k = a*((100+b)*0.01);
    printf("%.2f", k);
    return 0;  
}