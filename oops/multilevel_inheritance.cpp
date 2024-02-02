#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
   string name;

public:
   void introduce()
   {
      cout << " person intro"<<name<<endl;
   }
};

class Employe : public Person
{

protected:
   int salary;

public:
   void nsalary()
   {
      cout << "My Monthly Salary "<<salary<<endl;
   }
};

class Manager : public Employe
{
public:
   string department;

   Manager(string name, int salary, string department)
   {
      this->name = name;
      this->salary = salary;
      this->department = department;
   };

   void work()
   {
      cout << "i am leading the department " << department << endl;
   }
};

int main()
{
    Manager A1("keshav", 546,"sde");
    A1.work();
   return 0;
}