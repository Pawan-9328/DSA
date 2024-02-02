#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<int> arr(5);
   cout<<" enter the input: ";
   for(int i =0; i<5; i++)
          cin>>arr[i];

          // file ko open 
          ofstream fout;
          fout.open("zoom.txt");
          for(int i = 0; i<5; i++){
             fout<<arr[i];
          }
      fout.close();


   return 0;
}