#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int sumN(int n )
{
    if(n==1)
    return 1;

    return n+sumN(n-1); 
    
}


int main(){
        int n =6;
        cout<<sumN(n);
   return 0;
}