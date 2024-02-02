#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countVowel(string str, int index)
{

   if (index == -1)
      return 0;

 else if(str[index]=='a' || str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')


           return 1 + countVowel(str,index-1);   
   
   else
       return countVowel(str,index-1);
   

}
int main()
{
   string str = "pawan";
   cout << countVowel(str, 4);
   return 0;
}