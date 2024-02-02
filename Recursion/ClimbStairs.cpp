#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n){
        if(n==0 ||n ==1)
         return 1;
        

     int finalAns = climbStairs(n-1)  + climbStairs(n-2);
     return finalAns;
}

int main(){
   int n;
   cout<<"Enter the nth step value "<<endl;
   cin>>n;

   int ans  = climbStairs(n);
   cout<<" Total step for destination is "<<ans<<endl;
   return 0;
}