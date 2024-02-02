#include<iostream>
#include <bits/stdc++.h>
using namespace std;

 void recArr(int arr[], int n, int i){
    
    if(i>=n){
      return ;
    }
     
     cout<<arr[i]<<" ";
    recArr(arr,n,i+1);
 }

int main(){
    int arr[] = {10,20,30,40,50};
     recArr(arr,5,0);

   return 0;
}