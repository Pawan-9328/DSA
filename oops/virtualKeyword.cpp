#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Animal
{

public:
   virtual void speak()
   {
      cout << " huhuhu \n";
   }
};

class Dog : public Animal
{

   void speak()
   {
      cout << " barking \n";
   }
};
int main()
{
   Animal *p;
   p = new Dog;
   p->speak();
   return 0;
}