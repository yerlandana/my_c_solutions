#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, l, r;
    cin>>a>>l>>r;
    vector <int> n;
    long result = 0;
    for(int i = 0; i < a; i++){
        int m;
        cin>>m;
        n.push_back(m);
    }
    for(int i = l-1; i < r; i++){
        result = n[i] + result;
    }
    cout<<result;
    return 0;
}