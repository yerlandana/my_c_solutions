#include <iostream>
using namespace std;
#include <string>
int main() {
    string s;
    cin>>s;
    int res1 = 0, res2 = 0;
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0){
            int k = (int) s[i];
            res1 = res1 + (k-48);
        }else{
            int k = (int) s[i];
            res2 = res2 + (k-48);
        }
    }
    cout<<(res1==res2?"YES":"NO");
  return 0;
}