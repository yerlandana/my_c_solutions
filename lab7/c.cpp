#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int is_exists(int f, int k, int b){
    if(b < f || b > k) return 0;
    else if(k-1 == b || k == b) return 1;
    else return is_exists(f, k/2, b);

}

int main(){
    int a, b; cin>>a;
    int m[a];
    for(int i = 0; i < a; i++)cin>>m[i];
    cin>>b;
    if(b > a){
        cout<<"No";
    }else{
        cout<<((is_exists(m[0],m[a-1], b) == 1)?"Yes":"No");
    }
    return 0;
}
