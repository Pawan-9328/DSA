#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Human
{

   // private:
   // string name;
   // int value;
   //   protected:
   //    string name;
   //    int value;
   string religion, color;

    //protected:
    public:
   string name;
   int age, weight;
};
// used hare anything private--protected--public
class Student : protected Human
{
private:
   int roll_number, fees;

    //protected:
   // string name;
   // int age, weight;

   public:
   Student(string name, int age, int weight, int roll_number, int fees)
   {

      this->name = name;
      this->age = age;
      this->weight = weight;
      this->roll_number = roll_number;
      this->fees = fees;
   }

   void display()
   {
      cout << name << " " << age << " " << weight << " " << roll_number << " " << fees << endl;
   }
};

class Teacher: public Human{
    int salary, id;
 

};

int main()
{
   Student A1("keshav", 29, 69, 171306019, 65000);
   A1.display();
   Teacher B;
   B.name = "pawan";
   // Student A;

   // A.print("keshav", 56,98);
   // A.name = "keshav";
   return 0;
}
