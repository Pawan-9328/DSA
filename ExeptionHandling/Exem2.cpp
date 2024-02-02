#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
   int a,b;
    cin>>a>>b;

    try{
          if(b==0)
            throw runtime_error(  " not possiable case \n");
              int c = a/b;
              cout<<c<<endl;

          
    }
          catch(const char *e){
             cout<<" Exeption occured "<<e<<endl;
          }
    
    
   return 0;
}