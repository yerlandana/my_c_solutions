#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, l, r;
    cin>>a>>l>>r;
    l = l - 1;
    r = r - 1;
    vector <int> n;
    long result = 0;
    for(int i = 0; i < a; i++){
        int m;
        cin>>m;
        n.push_back(m);
    }
        for(int i = 0; i < ((r-l+1)/2); i++){
            int k = n[l+i];
            n[l+i] = n[r-i];
            n[r-i] = k;
        }
    
    int i = 0;
    while(i < a){
        cout<<n[i]<<" ";
        i++;
    }
    return 0;
}