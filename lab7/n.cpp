#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, k; cin>>n>>k;
    vector<int> a; 
    int y = 0;
    for(int i = 0; i < n ; i ++){
        int d;cin>>d;
        a.push_back(d);
    }
    sort(a.begin(), a.end());
    for(int i = 1; i < n ; i ++){
        if(a[i] - a[i-1] <= k){
            y++;
        }
    }
    cout<<(y>=1?"cheater":"no");
    return 0;
}