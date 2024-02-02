#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
 int sumNum(int arr[], int index, int n ){
       
       if(index == n)
       return 0;

       return arr[index] + sumNum(arr,index+1,n);
 }

int main(){
   int sumvalue[] = {2,3,5,6,8,10};
 
   int n = 6;
   cout<<sumNum(sumvalue,0,n);

   return 0;
}