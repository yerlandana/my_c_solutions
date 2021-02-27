#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void bubble(){

}

int main(){
    vector <int> a;
    int n;
    cin>>n;
    int k;
   while(cin>>k){
        a.push_back(k);
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

