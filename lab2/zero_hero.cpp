#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    int j = 0;
    for(int i = 0; i<n; i++){
        cin>>a;
        while(a > 0){
            if(a%10 == 0){
                j++;
            }
            a = a /10;
        }
    }
    cout<<j;
    return 0;
}