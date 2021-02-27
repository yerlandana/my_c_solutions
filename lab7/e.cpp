#include <iostream>
using namespace std;

int un(int a){
    if(a == 1)return 0;
    else return a%2+un(a/2);
}

int main(){
    int a; cin>>a;
    cout<<(un(a)==0?"Yes":"No");
    return 0;
}