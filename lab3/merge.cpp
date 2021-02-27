#include <iostream>
using namespace std;
#include <bits/stdc++.h> 

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i = 0; i < n; i++){
      int m;
      cin>>m;
      a[i] = m;
  }
  int k;
  cin>>k;
  int b[k+n];
  for(int i = 0; i < n; i++){
      b[i] = a[i];
  }
  for(int i = n; i < n+k; i++){
      int m;
      cin>>m;
      b[i]=m;
  }
  
  int g = sizeof(b)/sizeof(b[0]); 
  sort(b, b+g);
  for(int i = 0; i < n+k; i++){
      cout<<b[i]<<" ";;
  }
 
}