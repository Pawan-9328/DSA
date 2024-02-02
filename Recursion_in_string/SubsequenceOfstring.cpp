#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void printSubsequences(string str, string output, int i)
// {
//    if (i >= str.length())
//    {
//       cout << output << endl;
//       return;
//    }

//    // exe
//    printSubsequences(str, output, i + 1);

//    // inc

//    output.push_back(str[i]);
//    printSubsequences(str, output, i + 1);
// }

 void printSubsequences(string str, string output, int i, vector<string>&v)
{
   if (i >= str.length())
   {
      v.push_back(output);
      return;
   }
   // inc
   output.push_back(str[i]);
   printSubsequences(str, output, i + 1,v);
   output.pop_back();

 // exe
   printSubsequences(str, output, i + 1,v);
}
int main()
{
   string str = "abc";
   string output = " ";
   vector<string>v;
   int i = 0;

   printSubsequences(str, output, i,v);

   cout<<" printting seb "<<endl; 
   for(auto val: v ){
      cout<<val<<" ";
   }
   cout<<endl;

   return 0;
}