#include<iostream>
using namespace std;
int main(){
    int n,res=0;    
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    int m=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                b[j]=b[m-1];
                m--;
                res++;
                break;}}}
    cout<<res;}