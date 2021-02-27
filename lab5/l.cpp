#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    string s;
    cin>>s;
    string p = s;
    sort(s.begin(), s.end());
    cout<<(p == s?"YES":"NO");
  return 0;
}