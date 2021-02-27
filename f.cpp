#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int a, b;
    string q, w;
    cin >> a;
    vector <string> v, e;

    while (a--)
    {
        cin >> q;
        v.push_back(q);
    }
    cin >> b;
    while (b--)
    {
        cin >> w;
        e.push_back(w);
    }
    sort (v.begin(), v.end());
    sort (e.begin(), e.end());
    cout << "Missed students:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < e.size(); j++)
        {
            if (v[i] != e[j])cout << "- " << v[i] << endl;
        }
    }
    cout << "Not in the group: " << endl;
    
    for (it2 = e.begin(); it2 != e.end(); it2++)
    {
        for (it1 = v.begin(); it1 != v.end(); it1++)
        {
            if (*it1 != *it2)
            {
                cout << "- " << *it2 << endl;
                break;
            }
        }
    }
}