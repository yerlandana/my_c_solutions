#include <iostream>
#include <string>
using namespace std;

int suum(string a, int n, int i){
    if(i == a.length()) return n;
    if((a[i]-48) % 2 == 0)n++;
    i++;
    return suum(a, n, i);
}

int main(){
    int n = 0;
    int i = 0;
    string a; cin>>a;
    cout<<suum(a, n, i);
    return 0;
}