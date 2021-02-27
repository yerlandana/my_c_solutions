#include <iostream>
using namespace std;

int main(){
    string g, sub;
    cin>>g>>sub;
    cout<<((g.find(sub) <= g.length())?"YES":"NO");
    return 0;
}
