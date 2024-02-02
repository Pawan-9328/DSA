#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool targetSum(int arr[], int index, int n, int target)
{
   if (target == 0)
   
      return 1;
   
   if (index == n || target < 0)
   
      return 0;
   

   return targetSum(arr, index + 1, n, target) || targetSum(arr, index + 1, n, target - arr[index]);
}

int main()
{
   int arr[] = {3, 6, 4, 5};
   int target = 12;
   cout<<targetSum(arr, 0, 4, target)<<" ";


   return 0;
}