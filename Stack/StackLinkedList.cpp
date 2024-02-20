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
      //..heap complete fill hone prr
      if (temp == NULL)
      {
         cout << "Stack Overflow\n";
         return;
      }
      else
      {
         temp->next = top;
         top = temp;
         size++;
         cout << "Pushed " << value << " into the stack \n";
      }
   }
   // pop
   void pop()
   {
      if (top == NULL)
      {
         cout << "Stack underflow\n";
         return;
      }
      else
      {
         Node *temp = top;
         cout << "Popped " << top->data << " from the stack\n";
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
         cout << " Stack is empty \n";
         return -1;
      }
      else
      {
         return top->data;
      }
   }
   // isEmpty
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
     Stack s;
     s.push(6);
     s.push(16);
     s.push(18);
     s.push(28);
     s.push(32);
     s.pop();
     cout<<s.IsSize()<<endl;
     cout<<s.peek()<<endl;
     cout<<s.isEmpty()<<endl;

 



   return 0;
}