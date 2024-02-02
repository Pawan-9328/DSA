#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a = 10;

   // printing the address of a

   //  cout << &a << endl;
   // int *ptr = &a;
   // cout << ptr << endl;
   // float m = 2.62;
   // float *ptr1 = &m;
   // cout << ptr1 << endl;



     int arr[5] = {1,2,3,4,5};
     //arr++; cant change this value  because is contant type value 
     int *ptr = arr;

  // print the address of first element or 0th index 

//   cout<<arr<<endl;
//   cout<<&arr<<endl;
//   cout<<&arr[0]<<endl;
//   cout<<arr+0<<endl;


//   // print the address of second element or 1 index 
      
//       cout<<arr+1<<endl;
//       cout<<&arr[1]<<endl;

//       // print the value of 0th index  


//        cout<<arr[0]<<endl;
//        cout<<*arr<<endl;
//        cout<<*(arr+0)<<endl;
     
     //......saare address ko print krdo.....
            
            // for (int i = 0; i < 5; i++)
            // {
            //    cout<<arr+i<<endl;
            // }

            // Arithmetic operation ptr++; ptr--, ptr = ptr+1;
             
            //  for (int i = 0; i < 5; i++)
            //  {
            //        cout<<*ptr<<" ";
            //        ptr++;
                 
                 
            //  }

            //addition 
         
         ptr = ptr+3;
         cout<<*ptr<<endl;

         ptr = ptr-2;
         cout<<*ptr<<endl;
             

   return 0;
}