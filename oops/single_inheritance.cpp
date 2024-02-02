#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Human
{
protected:
   string name;
   int age;

public:
   void work()
   {
      cout << "working \n";
   }

   Human(string name, int age)
   {
      this->name = name;
      this->age = age;
      // cout<<" Human is working \n";
   }
};

class Student : public Human
{
   int roll_number, fees;

public:
   Student(string name, int roll_number, int age, int fees) :
    Human( name,age)
   {
      this->name = name;
      this->roll_number = roll_number;
      this->age = age;
      this->fees = fees;
      // }

      // Student(){
      //    cout<<" Student \n";
      // }
   }
};

int main()
{

   Student A1();

   return 0;
}