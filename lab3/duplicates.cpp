#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
  int n;
  cin>>n;
  vector <int> a;
  vector <int> b;
  for(int i = 0; i < n; i++){
      int m;
      cin>>m;
      a.push_back(m);
  }
  int m = a[0];
  b.push_back(m);
  for(int i=1; i < n; i++){
    if(m == a[i]){
      continue;
    }else{
      b.push_back(a[i]);
    }
    m = a[i];
  }
  for(int i = 0; i < b.size(); i++){
    cout<<b[i]<<" ";
  }
  
}