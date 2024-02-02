#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkP(string str, int start, int end)
{
   // base condition
   if (start >= end)
   {
      return 1;
   }
   // not matched
   if (str[start] != str[end])
   {

      return 0;
   }
   return (str, start + 1, end - 1);
}
int main()
{
   // chack palindrome

   string str = "naman";
    cout<< checkP(str,0,4);

  
   // cout<<"check palindrome "<<checkP(str,0,4)<<endl;
   return 0;
}