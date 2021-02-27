#include <iostream>
using namespace std;
int main() {
  string s;
  getline(cin, s);
  for(auto c:s){
    if(c >= '0' and c<='9')
    cout<<c;
  }
}

////sort(str.begin(), str.end());  -->sort


  string str="We think in generalities, but we live in details.";
  string str2 = str.substr (3,5);     // "think"
  size_t pos = str.find("live");      // position of "live" in str ->33
  std::string str3 = str.substr (pos);     // get from "live" to the end