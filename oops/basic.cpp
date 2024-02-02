#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
   string name;
   int roll_no;
   int age;
   string grade;
   //...function getter and setter
   public:
   //...set the value.....
   void setName(string s ){
      if(s.size() == 0){
         cout<<" Invalid case: "<<endl;
         return;
      }
      name = s;
   }
   void setAge(int a){
      age =a;
   }
   void setRoll(int r){
      roll_no = r;
   }
     void setGrade(string g){
      grade =g; 
     }
   //...get the value...

   void getname(){
      cout<<name<<endl;
   }
   void getage(){
      cout<<age<<endl;
   }

  int getrollno(){
      return roll_no;
   }
  string getgrade(int pin){
           if(pin==123)
           return grade;

           return " ";
   }
};

int main()
{
   Student s1;
   // S1.name = " Keshav";
   // S1.roll_no = 171306019;
   // S1.age = 22;
   // cout << S1.name << " ";
   s1.setName("");
   s1.setAge(29);
   s1.setRoll(171306019);
   s1.setGrade("A+");
   s1.getname();
   s1.getage();
   //s1.getgrade(123);
   cout<<s1.getrollno()<<endl;
   cout<<s1.getgrade(123)<<endl;

   return 0;
}