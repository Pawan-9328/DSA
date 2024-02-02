#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Customer
{

   string name;
   int accountnumber, balance;
   int age;

public:
   Customer(string name, int accountnumber, int balance, int age)
   {
      this->name = name;
      this->accountnumber = accountnumber;
      this->balance = balance;
      this->age = age;
   }

   void updateAge(int age)
   {
      if (age > 0 && age < 100)
      {
         this->age = age;
      }
   }

   void deposit(int amount)
   {
      if (amount > 0)
      {
         balance += amount;
      }
   }

   void withdraw(int amount)
   {
      if (amount <= balance && amount > 0)
      {
         balance -= amount;
      }
   }
   void display()
   {
      cout << name << " " << accountnumber << " " << balance<<" "<<age << endl;
   }
   // access static with help of static function...
};

int main()
{
   Customer A1("keshav", 1, 300,89);
   Customer A2("pawan", 2, 500,29);
   A1.deposit(-10);
   A1.updateAge(25);
   A1.display();

   return 0;
}