#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(int **p1)
{

   *p1 = *p1+1;
}

int main()
{
   int n = 10;
   int *p = &n;   // single pointer
   int **p2 = &p; // double pointer
                  // int ***p3 = &p2; // Triple pointer
                  // int ****p4  = &p3; // fourth pointer
                  // cout << p << endl;
                  // cout << &p << endl;
                  // cout << p2 << endl;
                  // cout << &p2 << endl;
                  // cout << p3 << endl;

   // value ko modify krna ho jo n m rkhii hai....

   //   **p2 = **p2+5;
   //   cout<<n<<endl;

   //   ****p4 = ****p4+10;
   //   cout<<n<<endl;

   cout << p << endl;
   fun(p2);
   cout << p << endl;
   return 0;
}