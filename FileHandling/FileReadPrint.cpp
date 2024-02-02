#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
   ifstream fin;
   //file  ko open kro 
   fin.open("zoom.txt");
   //fr read kro 
   char c;
   c = fin.get();
   while(!fin.eof()){
      cout<<c;
      c = fin.get();
   };
   //close file
   fin.close();
   return 0;
}