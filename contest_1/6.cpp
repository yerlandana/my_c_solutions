#include <iostream>
using namespace std;

int main(){
    int a, b, m, n;
    cin>>a>>b>>m>>n;
    int c = (a*100+b) - m*n;
    cout<< c/100 << " "<<c-((c/100)*100);
    return 0;
}