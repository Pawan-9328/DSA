#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Customer
{
   string name;
   int accountnumber, balance;
   // attrubute of class saare class object k lie value same hogi
   static int totoal_customer;
   static int totoal_balance;

public:
   // access without object directly..
   // static int totoal_customer;
   Customer(string name, int accountnumber, int balance)
   {
      this->name = name;
      this->accountnumber = accountnumber;
      this->balance = balance;
      // this->totoal_customer = totoal_customer;
      totoal_customer++;
      totoal_balance += balance;
   }
    static void accessStatic()
   {
      cout<<"Total number customer "<< totoal_customer << endl;
      cout<<"Total balance "<< totoal_balance << endl;
   }
   void deposit(int amount)
   {
      if (amount > 0)
      {
         balance += amount;
         totoal_balance += amount;
      }
   }
  
   void withdraw(int amount)
   {
      if (amount <= balance && amount > 0)
      {
         balance -= amount;
         totoal_balance -= amount;
      }
   }
   void display()
   {
      cout << name << " " << accountnumber << " " << totoal_customer << endl;
   }
   // access static with help of static function...

   
   void display_total()
   {
      cout << totoal_customer << endl;
   }
};

int Customer::totoal_customer = 0;
int Customer::totoal_balance = 0;

int main()
{
   Customer A1("keshav", 1, 300);
   Customer A2("pawan", 2, 500);
   //A2.display_total();
   // Customer::totoal_customer = 5;
   // Customer::accessStatic();
   // A1.display_total();
   // A1.deposit(300);
   // Customer::accessStatic();
   // A1.withdraw(100);
   // Customer::accessStatic();





   return 0;
}