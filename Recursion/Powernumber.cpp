#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int pow(int num, int n){
      if(n==1)
      return num;

      return num*pow(num, n-1);
}

int main(){
    int n = 4;

    cout<<pow(2, n);
   return 0;
}