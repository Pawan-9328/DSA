#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Area
{
public:
   int circlerrectangle(int r)
   {
      return 3.14 * r * r;
   }

   int circlerrectangle(int l, int b)
   {
      return l * b;
   }
};
int main()
{
   Area A1, A2;
   cout << A1.circlerrectangle(4) << endl;
   cout << A1.circlerrectangle(3, 4) << endl;
   return 0;
}