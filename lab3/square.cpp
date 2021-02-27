#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector <int> n;

    for(int i = 0; i < a; i++){
        int m;
        cin>>m;
        n.push_back(pow(m, 2));
    }
    for(auto j : n){
      cout<<j<<" ";
  }
    return 0;
}