#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n];
    for(int i = 0; i  <n; i++)cin>>a[i];
    sort(a, a+n);
    for(int i =0; i< n; i++)cout<<a[i]<<" ";

    int cnt = 1;
    int num = a[0];
    int count;
    int temp = 0;

    for(int i = 0; i < n ; i++){
      temp  = a[i];
      count=0;
      for(int j = 0; j < n; j++){
        if(temp = a[j]){
          count++;
        }
        if(temp > cnt){
          num = temp;
          cnt = count;
        }
      }
    }
    cout <<num;
    return 0;
}