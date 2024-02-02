#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Human{
   
  
   private:
   int b;
   protected:
   int c;
   public:
   int a;
 
   void fun(){
           a=10;
           b=20;
           c=30;
   }



};
int main(){
     Human Keshav;
     Keshav.a = 10;
     Keshav.fun();

   return 0;
}