#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

//function ccount 
int ccount(char a, int x, int y){
    if(a == '+'){
        return x + y;
    }
    if(a == '-'){
        return x - y;
    }
    if(a == '*'){
        return x * y;
    }   
}

int main(){
    int m;
    cin >> m;
    vector <string> str;
    vector <int> v1;

    for(int i = 0; i < m; ++i){
        char x, y, z;
        int a, b;

        cin >> z >> x >> a >> y >> b;
        string ll;
        ll += x; 
        ll += " "; 
        ll += z; 
        ll += " "; 
        ll += y;
        ll += " = ";
        
        v1.push_back(ccount(z, a, b)); 
        str.push_back(ll);
    }
    for(int i = 0 ; i < str.size(); ++i){
        cout << str[i] << v1[i] << endl;
    }

}