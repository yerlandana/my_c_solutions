#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h> 
using namespace std;

int main(){
    double a, b;
    cin>>a>>b;
    double result = hypot(a, b);
    if(a+b>result && a+result>b && a+b>result){
        cout<<setprecision(4)<<result;
    }
    return 0;
}