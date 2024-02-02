#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void setsPrint(int arr[], int index, int n , int sum, vector<int>&ans ){
     // base case 
     
     if(index==n){
      ans.push_back(sum);
      return ;
     }

     // Not include..
     setsPrint(arr, index+1, n, sum,ans);
     // incldue.
     setsPrint(arr, index+ 1, n, sum+arr[index],ans);
}

int main(){
   int arr[] = {3,4,5};
   vector<int>ans;
   setsPrint(arr,0,3,0,ans);
   for(int i=0; i<ans.size(); i++)
   cout<<ans[i]<<endl;
   return 0;
}