#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun3(int n)
{    
   if(n==0){
      cout<<"Finally Happy birthday "<<endl;
      return ;
   }
   cout << n << " day left birthday \n";
   fun3(n - 1);
}

int main()
{
   int n = 4;
   // iterative  approach
   //   for (int i = n; i>0; i--)
   //   {
   //     cout<<i<<" day left birthday \n";
   //   }
   //   cout<<" finally Happy Birthday "<<endl;

   fun3(3);
    
   return 0;
}