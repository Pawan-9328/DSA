#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void lowerUpper(string &str, int index){
     
     if(index==-1)
     return ;
     
     str[index] = 'a'+str[index] - 'A';
      lowerUpper(str,index-1);
}


int main(){
   string str = "KESHAV";
   lowerUpper(str,5);
   cout<<str<<" "<<endl;
   return 0;
}