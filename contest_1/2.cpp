#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b = a/100000 + (a/10000)%10;
    int c = a%100/10 + a%100%10;
    cout<<((b==c)?"YES":"NO");
    return 0;
}