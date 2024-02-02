#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void revString(string &str, int start, int end){
       
       if(start>=end)
       return ;

       char c  = str[start];
        str[start] = str[end];
        str[end] = c;

     revString(str,start+1, end-1);
}

int main(){
   string str  = "keshav";
   revString(str,0,4);
   cout<<"reverse value is "<<str;
   return 0;
}