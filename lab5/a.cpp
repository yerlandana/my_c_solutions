#include <iostream>
using namespace std;

int main(){
    string g;
    int c = 0;
    int s = 0;
    cin>>g;
    for(int i = 0; i < g.length(); i++){
        if(g[i] > 64 and g[i] < 91) c++;
        else s++;
    }
    cout<<s<<" "<<c;
    return 0;
}
