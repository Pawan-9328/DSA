#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printRev(int n)
{
   if (n == 0)
      return;
   printRev(n - 1);
      cout << n << " ";
}

int main()
{
   int n;
   cout << " Enter the Number here " << endl;
   cin >> n;

   printRev(n);

   return 0;
}