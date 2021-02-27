#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    if(a%2 != 0){
        cout<<"Super";
    }else if (a%2 == 0 && (a>1 && a<6)){
        cout<<"Not Super";
    }else if(a%2 == 0 && (a>5 && a<21)){
        cout<<"Super";
    }else{
        cout<<"Not Super";
    }
    return 0;
}