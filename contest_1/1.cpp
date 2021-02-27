#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> a;
    int k = 0;
    int b = 1;
    while(b!=0){
        cin>>b;
        a.push_back(b);
    }
    int m = a[0];
    for(int i = 1; i < a.size(); i++){
        if (m < a[i]){
            k++;
        }
        m = a[i];
    }
    cout<<k;
    return 0;
}