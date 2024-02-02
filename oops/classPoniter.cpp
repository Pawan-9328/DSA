#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int age; 
    int number;


};
int main(){
   student *s = new student;
   (*s).name = "keshav";
   (*s).age = 29;
   (*s).number = 356;


   return 0;
}