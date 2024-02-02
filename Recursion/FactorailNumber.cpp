#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
   if (n == 0)
      return 1;

   return n * fact(n - 1);
}

int main()
{
   // Factorail of n number

   int n = -7;
   if (n < 0)
   {
      cout << " factorail is not possiable \n";
   }

   cout << fact(n);
   return 0;
}