#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class invalidError : public runtime_error {
  
  public:

  invalidError(const string &msg): runtime_error(msg)
  {};

};


class Customer
{
   string name;
   int balance, account_number;

public:
   Customer(string name, int balance, int account_number)
   {
      this->name = name;
      this->balance = balance;
      this->account_number = account_number;
   }
   // deposit..

   void deposit(int amount)
   {
      if (amount < 0)
      {
         throw invalidError( "Amout should be greater then 0 \n");

         balance += amount;
         cout << amount << " rp Amount is created successfully \n";
      }
   }
   // ..withdraw..
   void withdraw(int amount)
   {

      if (amount > 0 && amount <= balance)
      {
         balance -= amount;
         cout << amount << " rp is debited successfully \n";
      }
      else if (amount < 0)
      {
         throw invalidError(" rp is debited successfully \n");
      }
      else
      {
         throw invalidError(" Your balance is low \n");
      }
   }
};
int main()
{

   Customer c1("keshav", 5000, 100);

   try
   {
      c1.deposit(7000);
      c1.withdraw(1000);
      c1.deposit(10);
   }
   catch(const invalidError &e){
      cout<<"Exception handling: "<<e.what()<<endl;
   }
   
   catch(const bad_alloc &e ){
      cout<<"Exception occured: "<<e.what()<<endl;
   }
  
   
    catch(...){
       cout<<"Exception handling "<<endl;
   }

   return 0;
}