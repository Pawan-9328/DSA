#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    s.push(6);
    s.push(5);
    s.push(4);

    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;

   return 0;
}