#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
   };
   // deposit
   void deposit(int amount)
   {
      if (amount > 0)
      {   
         throw "Amount should be greater then 0";
         balance += amount;
         cout << amount << " rp Amount created successfully" << endl;
      }
      // else{
      //     throw "Amount should be greater then 0 \n";
      // }
   }
   // withdraw
   void withdraw(int amount)
   {
      if (amount > 0 && amount <= balance)
      {
         balance -= amount;
         cout << amount << " rp  Amount is debited successfully " << endl;
      }
      else if(amount<0){
          throw" rp Amoiunt should be greater then 0 \n";
        
      }else{
           throw " Your balance is low \n";
      }
   }
   // display function 
   void display(int amount){

       cout<<"Current balance is  "<<amount<<endl;
   }
};
int main()
{ 
   Customer c1("keshav",5000, 10);
   try {
   c1.deposit(100);
   c1.withdraw(6900);
   }
   catch(const char *e){
       cout<<" Exeption occured "<<e<<endl;
   }

   return 0;
}