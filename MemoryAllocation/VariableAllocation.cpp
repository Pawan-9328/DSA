#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

   // Heap memory alocation

   int *ptr = new int;
   *ptr = 5;
   cout << *ptr;
  cout<<endl;

   // create array

   int n;
   cout << "enter the array"<<endl;
   cin >> n;

   int *p = new int[n];

   // put the value
   for (int i = 0; i < n; i++)

      p[i] = i + 1;
   // print

   for (int i = 0; i < n; i++)
      cout << p[i]<< endl;
 // now delete  

 delete ptr;
 delete [] p;
   return 0;
}