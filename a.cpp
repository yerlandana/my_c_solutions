#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int m;
    cin >> m;
    vector <int> v;
    vector <int> :: iterator it;
    while (m--)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int b;
    cin >> b;
    while (b--)
    {
        int temp2, cnt = 0;
        cin >> temp2;
        for (it = v.begin(); it != v.end(); it++)if (*it == temp2) cnt++;
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}