#include <iostream>
using namespace std;

int main(){
    int a;
    int result = 0;
    while(a != '\n'){
        cin>>a;
        result += a;
    }
    cout<<result;
    return 0;
}