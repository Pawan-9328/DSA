#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> v, int s, int e, int key){
      if(s>e){
         return -1;
      }
      int mid = s+(e-s)/2;

      if(v[mid] == key){
         return mid;
      }
      if(v[mid] < key){
         return binarySearch(v, mid+1, e, key);
      }
      else{
          return binarySearch(v,s,mid-1,key);
      }
}
int main(){
   vector<int> arr{10,20,30,40,55,65,78,90};
   int target = 78;
   int n = arr.size();
   int s = 0;
   int e  = n-1;
   int ans  = binarySearch(arr,s,e,target);

   cout<<" answer:"<<ans<<endl;
   return 0;
}