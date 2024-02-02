#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printDigit(int n)
{
   if (n == 0)
   {
      return;
   }

   printDigit(n / 10);
   int digit = n % 10;
   cout << digit << " ";
}

int main()
{
   int n = 25625;

    if(n==0){
       cout<<"Enter n right value "<<endl;
    }
      
   printDigit(n);

   return 0;
}