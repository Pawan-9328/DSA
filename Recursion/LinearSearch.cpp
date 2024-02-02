#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool linearS(int arr[], int n, int index, int x)
{
   if (index == n)
      return 0;

   if (arr[index] == x)
      return 1;

   return linearS(arr, n, index + 1, x);
}
int main()
{
   int arr[] = {10, 3, 4, 5, 6, 7, 22, 44, 5};
   int n = 9;
   int x = 12;
   bool ans = linearS(arr, n, 0, x);

   if (ans)
   {
      cout << " Element Find" << endl;
   }
   else
   {
      cout << "Element Not Find" << endl;
   }

   return 0;
}