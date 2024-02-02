#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void findMax(int arr[], int i, int n, int &maxi){
     
     if(i>=n)
     return ;
   

   if(arr[i] > maxi){
      maxi = arr[i];
   }
        return findMax(arr,i+1,n,maxi);
}

int main(){
   int arr[] = {-10, 3,4,5,6,7,50};
    int maxi = -1;
    findMax(arr, 0, 7,maxi);
    cout<<"Find Maximum Number "<<maxi<<endl;
     return 0;
}