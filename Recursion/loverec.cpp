#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int Factorail(int  n){
        if(n<=1)
        return n;

        return n* Factorail(n-1);
}


int main(){
    int n;
    cout<<" Enter the n value "<<endl;
    cin>>n;

    int ans = Factorail(n);
    cout<<"Answer is: "<<ans<<endl;

   return 0;
}