#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    string a;
    cin>>a;
    int k = a.length();
    int h[a.length()];
    for(int i = 0; i< a.length(); i++){
        int k = a[i] - 48;
        h[i] = k;
    }
    sort(h, h+k);
    vector<bool> visited(k, false); 
    for (int i = 0; i < k; i++) { 

        if (visited[i] == true) 
            continue; 
  
        // Count frequency 
        int count = 1; 
        for (int j = i + 1; j < k; j++) { 
            if (h[i] == h[j]) { 
                visited[j] = true; 
                count++; 
            } 
        } 
        cout << h[i] << ": " << count << endl; 
    } 

    return 0;
}