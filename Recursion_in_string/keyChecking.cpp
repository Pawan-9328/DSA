#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void keyCheck(string str, int i, int n, char key, vector<int> &ans)
{
   // base case
   if (i >= n)
   {
      return  ;
   }

   if (str[i] == key)
   {
      // return true;
      ans.push_back(i);
   }

   return keyCheck(str, i + 1, n, key, ans);
}

int main()
{
   string str = "KeshavDas";
   int n = str.length();
   char key = 'p';
   int i = 0;
   vector<int> ans;
   // bool ans = keyCheck(str, i, n, key, ans);

   keyCheck(str, i, n, key, ans);
   // cout << " answer is: " << ans << endl;
   cout << " printing ans " << endl;
   for (auto val : ans)
   {
      cout << val << " ";
   }

   cout << endl;

   return 0;
}