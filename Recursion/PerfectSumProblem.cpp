#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subsetIs(int arr[], int index, int n, int sum)
{
   if (index == n)
      return sum == 0;

   return subsetIs(arr, index + 1, n, sum) + subsetIs(arr, index + 1, n, sum - arr[index]);
}

int main()
{
   int arr[] = {2, 5, 6, 1,3};
   int sum = 8;
   cout<<subsetIs(arr, 0, 5, sum);

   return 0;
}