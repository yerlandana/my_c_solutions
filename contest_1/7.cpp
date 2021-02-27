#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s = n;
    int result = 0;
    while(n > 0){
        int a;
        cin>>a;
        result = result + a;
        n--;
    }
    double m = (double)result/s;
    cout<<"Average: "<<m<<endl;
    cout<<"Sum: "<<result<<endl;
    return 0;
}