#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
   int data;
   Node *next;

   Node(int value)
   {
      data = value;
      next = NULL;
   }
};

class Stack
{
   Node *top;
   int size; // actual size of stack
public:
   Stack()
   {
      top = NULL;
      size = 0;
   }
   // push
   void push(int value)
   {
      Node *temp = new Node(value);
      // memory full
      if (temp == NULL)
      {
         cout << "Stack Overflow \n";
         return;
      }
      else
      {
         temp->next = top;
         top = temp;
         size++;
         cout<<"Pushed "<<value<<" into the stack\n";
      }
   }
   // pop
   void pop()
   {
      if (top == NULL)
      {
         cout << " Stack Underflow \n";
         return;
      }
      else
      {
         Node *temp = top;
         cout << "Popped " << top->data << " from the stack \n";
         top = top->next;
         delete temp;
         size--;
      }
   }
   // peek

   int peek()
   {
      if (top == NULL)
      {
         cout << "Stack is empty \n";
      }
      else
      {
         return top->data;
      }
   }
   // IsEmpty
   bool isEmpty()
   {
      return top == NULL;
   }
   // IsSize
   int IsSize()
   {
      return size;
   }
};
int main()
{
   Stack S;
   S.push(4);
   S.push(6);
   S.push(15);
   S.pop();
   cout<<S.isEmpty()<<endl;
   cout<<S.IsSize()<<endl;
   cout<<S.peek()<<endl;
 

   return 0;
}