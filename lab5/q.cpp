#include <iostream>
using namespace std;

int main(){
    string g, sub;
    cin>>sub>>g;
    bool p = true;
    if(g.length() % sub.length() == 0){
        string neww = "";
        int leng = g.length() / sub.length();
        int i = 0;
        while(i < leng){
            neww = neww + sub;
            i++;
        }
        cout<<(neww==g?"YES":"NO");
    }else{
        cout<<"NO";
    }
    return 0;
}


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