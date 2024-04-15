#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Implement it with array
class Stack
{

   int *arr;
   int size;
   int top;

public:

bool flag;
   // constructor
   Stack(int s)
   {
      size = s;
      top = -1;
      // s size array create and it's address store in arr
      arr = new int[s];
      flag = 1; 
   }
   // push
   void push(int value)
   {
      if (top == size - 1)
      {
         cout << "Stack Overflow \n";
      }
      else
      {
         top++;
         arr[top] = value;
         cout<<"Pushed "<<value<<" into the stack \n";
         
      }
   }
   // pop

   void pop()
   {
      if (top == -1)
      {
         cout << " Stack Underflow /n";
      }
      else
      {

         cout << "Poppped "<< arr[top] <<" from the stack \n ";
         top--;
         if(top==-1)
         flag=1;
      }
   }

   // Peek
   int peek()
   {
      if (top == -1)
      {
         cout <<"Stack is empty \n";
         return -1;
      }
      else
      {
         return arr[top];
      }
   }
   // IsEmpty

   bool IsEmpty()
   {
      return top == -1;
   }
   // IsSize
   int IsSize()
   {
      return top + 1;
   }
};
int main()
{ 
   Stack S(5);
   // S.push(5);
   // S.push(6);
   // S.push(8);
   // S.push(10);
   // S.pop();
   // cout<<S.peek()<<endl;
   // cout<<S.IsSize()<<endl;
   // cout<<S.IsEmpty()<<endl;

   int value = S.peek();
   //check stack is empty or not 
   if(S.flag == 0)
   cout<<value<<endl;    
   //cout<<S.peek()<<endl;

   return 0;
}