#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Customer
{
   string name;
   int account;
   int balance;

public:
   //..Default constructor..
   Customer()
   {
      name = "Keshav";
      account = 123;
      balance = 3788;
   }
   //..parameterized constructor...
   Customer(string name, int account, int balance)
   {
      this->name = name;
      this->account = account;
      this->balance = balance;
   }
       Customer(string a, int b){
            name = a;
            account = b;
            balance  = 50;
       }
       //....copy constructor ....
       Customer(Customer &B){
         name  = B.name;
         account = B.account;
         balance = B.balance;
       }

   void display()
   {
      cout << name << " " << account << " " << balance<<endl;
   }
};

int main()
{
   Customer A1;
   Customer A2("naman",908, 7898);
   Customer A3("pawan",90);
   A1.display();
   A2.display();
   A3.display();
   Customer A4(A3);
   A4.display();
   Customer A5;
   A5 = A2;
   A5.display();
   return 0;
}