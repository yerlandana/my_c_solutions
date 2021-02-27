#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b;
    cin>>a>>b;
    double result = (b/a)*100;
    cout<<setprecision(6)<<result;
    return 0;
}