#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Complexx
{
   int real, img;

public:
   Complexx(){

   };

   Complexx(int real, int img)
   {
      this->real = real;
      this->img = img;
   }

   void display()
   {
      cout << real << " +i" << img << endl;
   }

   Complexx operator+(Complexx &C)
   {
      Complexx ans;
      ans.real = real + C.real;
      ans.img = img + C.img;
      return ans;
   }
};

int main()
{
   Complexx C1(3, 4);
   Complexx C2(4, 6);
   Complexx C3 = C1 + C2;
   C3.display();
   return 0;
}