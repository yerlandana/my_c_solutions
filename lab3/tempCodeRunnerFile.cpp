#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    string a;
    vector <string> k ;
    long result = 0;
    getline(cin, a);
    int f = 0;
    int m = a[0] - '0';
    for(int i = 0; i <a.size(); i++){
        if(a[i] == ' '){
            if(i-f == 2){
                result = m*10  + (a[f+1]-'0') + result;
                cout<<result<<" ";
                m = a[i+1]-'0';
                f = i;
            }else{
                result = (a[f]-'0') + result;
                cout<<result<<" ";
                f = i;
            }
            }
    }  
    //cout<<result;
    return 0;
}