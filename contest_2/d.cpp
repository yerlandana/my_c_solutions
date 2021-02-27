#include <iostream>
using namespace std;

int main(){
    string m;
    cin>>m;
    int x = m.length()/2;
    bool p  = true;
    for(int i = 0; i < x; i++){
        if(m[i] != m[m.length() - 1-i]){
            p = false;
            break;
        }
    }
    bool el = true;
    if(p == false){
        cout<<m.length();
    }else{
        int y = m[0];
        for(int i = 1; i < m.length()-1; i++){
            if(m[i] != y){
                el = false;
            }
        }
        if(el == true){
            cout<<0;
        }else{
            cout<<m.length()-1;
        }
    }
    return 0;
}