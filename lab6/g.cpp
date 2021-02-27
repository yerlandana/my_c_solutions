#include <iostream>
using namespace std;

int main(){
    string a;
    getline(cin, a); 
     for(int i=0; i<a.length(); i++){
       if(a[i] != 65 ){
           if(a[i] != 97){
               if(a[i] != 69){
                   if(a[i] != 101){
                       if(a[i] != 73){
                           if(a[i] != 105){
                               if(a[i] != 79){
                                    if(a[i] != 111){
                                        if(a[i] != 85){
                                            if(a[i] != 117){
                                                cout<<a[i];
                                            }
                                        }
                                    }
                                } 
                           }
                       }
                   }
               }
           } 
       }
     }
     return 0;
}