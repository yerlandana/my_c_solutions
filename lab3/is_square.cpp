#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a;
  cin>>a;
  int m  = sqrt(a);
  
  cout<<((a - pow(m, 2) == 0)?"Yes":"No");
}