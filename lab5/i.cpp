#include <iostream>
using namespace std;

int main(){
    string g, f;
    cin>>g>>f;
    int res = 0, res1 = 0;
    if(g.length() == g.length()){
        for(int i = 0; i < g.length(); i++){
            int k = (int) g[i];
            int d = (int) f[i];
            res = k + res;
            res1 = d + res1;
        }
        cout<<(res==res1?"YES":"NO");
    }else{
        cout<<"NO";
    }
    return 0;
}
