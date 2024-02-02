#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   try
   {
      int *p = new int[10000000000];
      cout << " Memory allocation is successfull \n";
      delete[] p;
   }
   catch (const exception &e)
   {
      cout << " Exception occured: " << e.what() << endl;
   }
   return 0;
}