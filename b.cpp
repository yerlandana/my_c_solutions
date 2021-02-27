#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){

    int a;
    string str;
    cin >> a;
    char t[8][8];

    for (auto & i : t)
    {
        for (char & j : i)j = '0';
    }

    for (int i =0; i < a; i++){
        cin >> str;
        t[str.at(0) - 64 - 1][str.at(1) - 48 - 1] = '*';
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++) cout << t[i][j];
        cout << endl;
    }
    
    return 0;

}