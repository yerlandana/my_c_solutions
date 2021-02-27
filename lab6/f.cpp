#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    string a;
    int n;
    int k = 0;
    cin>>a>>n;
    for(int i=0; i<a.length(); i++){
        if((int) a[i] >=48 & (int) a[i] <= 57){
            k++;
        }
    }
    cout<<(k >= n ? "YES":"NO");
    return 0;
}