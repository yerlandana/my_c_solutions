#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

char big(string a, int b)
{
    if (65 <= a.at(b) && a.at(b) <= 90) return a.at(b);
    if (b == a.size() - 1) return 'e';
    return big(a, b + 1);
}

int main(){
    string a;
    cin >> a;
    char d = big(a, 0);

    if (d == 'e') cout << -1;
    else cout << big(a, 0);
}