#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string m;cin>>m;
    bool f = true;
    for(int i = 0; i < m.length()/2; i ++)
        if(m[i] != m[m.length()- 1 - i])f = false;
    cout<<(f?"Yes":"No");
    return 0;
}