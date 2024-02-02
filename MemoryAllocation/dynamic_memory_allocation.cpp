#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   // create array jo store krga address ko
   int n, m;
   cin >> n >> m;
   // created 2-D array
   int **ptr = new int *[n];

   for (int i = 0; i < n; i++)
   {
      ptr[i] = new int[m];
   }

   for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
         cin >> ptr[i][j];

   // print value
   for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
         cout << ptr[i][j] << " ";

   cout << endl;

   // release the memory, heap se
           
      for (int i = 0; i < n; i++)
      
         delete [] ptr[i];
         delete[] ptr;
      
      


   return 0;
}