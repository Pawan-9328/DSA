#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> S;
    S.push(5);   
    S.push(5);   
    S.push(5);
    S.pop();
    //size
    cout<<S.size()<<endl;   
    //top 
    cout<<S.top()<<endl;
    cout<<S.empty()<<endl;
   return 0;
}