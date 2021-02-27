//max in array
int ans = a[0];
for(int i = 1; i < n; i++)
    if(ans < a[i])
        ans = a[i];

//min in array


//reverse array
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];
    int s = 0;
    int e = n-1;
    for(int i = n-1; i>=n/2; i--){
        int u = a[s];
         a[s] = a[e];
         a[e] = u;
         e--;
         s++;
    }
    for(int i= 0; i < n; i++)
        cout<<a[i]<<" ";
    return 0;
}

//eliminate duplicates

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::vector<std::string> i = {"one", "one", "two"};

    std::sort(i.begin(), i.end());

    auto iter = std::unique(i.begin(), i.end());

    i.erase(iter, i.end());

    for (const auto &s : i)
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}

// длинное слово в предложении

#include <iostream>
#include <string>
using namespace std;
#include <sstream>

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string max;
    while (ss >> s)
        if (s.size() > max.size())
            max = s;
    
    cout << max << endl;
    
  return 0;
}


/// s2.find(s1,pos)!=string::npos позиция слова на нормальном месте
#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int cnt=0;
    int pos=0;
    double n=s1.size();
    double m=s2.size();
    while(s2.find(s1,pos)!=string::npos){
        cnt++;
        pos=s2.find(s1,pos)+n;
    }
    if(cnt==m/n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}