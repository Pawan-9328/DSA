#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printEven(int n)
{
   if (n == 2)
   {
      cout << 2 << endl;
      return;
   }
   printEven(n - 2);
   cout << n << endl;
}
int main()
{
   int n = 11;
   if (n % 2 == 1)
   {
      n--;
      printEven(n);
   }

   return 0;
}