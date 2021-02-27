#include <iostream>
using namespace std;
#include <string>
#include <bits/stdc++.h> 

void decimalToBinary(int n){ 
        if(n==0){
            return;
        }
        else{
            decimalToBinary(n/2);
            cout<<n%2;
        }
} 


int main() 
{ 
    int n; 
    cin>>n;
    decimalToBinary(n); 
    return 0;
}