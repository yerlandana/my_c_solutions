#include <iostream>
using namespace std;


int main(){

  int a, b; cin>>a>>b;
  int m[a][b];
  for (int i = 0; i < a; i++){
    for(int j = 0; j < b; j ++){
      cin>>m[i][j];
    }
  }
  int cnt = 0;
  int k = 0;
  for (int i = 0; i < a; i++){
    for(int j = 0; j < b; j ++){
      if(m[i][j] == 2) cnt++;
    }
      if(cnt > 0) k++;
  }
  cout<<a-k;
  return 0;
}