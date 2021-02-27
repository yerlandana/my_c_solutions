#include <iostream>
using namespace std;

int main(){
    int a;
    int result = 0;
    while(a != ' '){
        cin>>a;
        result += a;
    }
    cout<<result;
    return 0;
}