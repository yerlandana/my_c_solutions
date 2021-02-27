#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int o = a%10;
    int r = 0;
    while (a != 0){
        r = r + (a%10);
        a = a / 10;
    }
    
    cout<<(r%o==0?"Yes":"No");
    return 0;
}