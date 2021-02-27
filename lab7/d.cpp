#include <iostream>
using namespace std;

int suum(string a, int sum, int i){
    if(i == a.length()) return sum;
    else sum = (a[i]-48)+suum(a, sum, ++i);
    return sum;
}

int main(){
    string a; cin>>a;
    int sum = 0;
    int i = 0;
    cout<<suum(a, sum, i);
    return 0;
}