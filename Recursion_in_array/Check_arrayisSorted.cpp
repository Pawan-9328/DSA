#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr, int i, int &n)
{
   if (i == n - 1)
   {
      return true;
   }
   if (arr[i + 1] < arr[i])
   {
      return false;
   }

   return isSorted(arr, i + 1, n);
}

int main() 
{
   vector<int> v {10, 20, 0, 50, 60};
   int n = v.size();
   int i = 0;
  bool ans = isSorted(v, i, n);
    
    if(ans){
      cout<<" Array is Sorted"<<endl;
    }
    else{
      cout<<"Not Sorted "<<endl;
    }
   return 0;
}