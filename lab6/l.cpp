#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int a[10];
int main(){
 string s;
 int n;
 cin>>s;
 cin>>n;
 int c=0;
 int maxi=0;
 for (int i=0;i<s.length();i++){
  if (s[i]>='0' && s[i]<='9'){
      c++;
  }
  else {
   if (c>maxi) {
    maxi = c;
   }
   c = 0;
  }
 }
 if (maxi>=n) cout<<"Valid";
 else cout<<"Not valid";
}