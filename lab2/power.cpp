#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int j = 0;
    while(pow(2, j) <= n){
        cout<<pow(2, j)<<" ";
        j++;
    }
    return 0;
}