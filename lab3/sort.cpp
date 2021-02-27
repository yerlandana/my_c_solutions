#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin>>n;
  vector <int> a;
  for(int i = 0; i < n; i++){
      int m;
      cin>>m;
      a.push_back(m);
  }

  for(int j = 0; j<n-1; j++){
      for(int i = 0; i < n-1-j; i++){
        if(a[i]<a[i+1]){
            swap(a[i], a[i+1]);
        }
  }
  }

  for(auto j : a){
      cout<<j<<" ";
  }
  
}