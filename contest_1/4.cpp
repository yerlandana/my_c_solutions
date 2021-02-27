#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    double m = (double)a/b;
    cout<<"Usual division: "<<m<<endl;
    cout<<"Division without remainder: "<<a/b<<endl;
    cout<<"Remainder: "<<a%b<<endl;
    return 0;
}