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
   Stack(int s)
   {
      size = s;
      top = -1;
      arr = new int[s];
      flag =1;
   }
   // Push
   void push(int value)
   {
      if (top == size - 1)
      {
         cout << " Stack OverFlow Occur \n";
         return;
      }
      else
      {
         top++;
         arr[top] = value;
         cout << "Pushed " << value <<" intro the stack \n";
         flag = 0;
      }
   }
   // Pop
   void pop()
   {
      if (top == -1)
      {
         cout << "Stack Underflow\n";
      }
      else
      {
         
         cout << "popped " << arr[top] << " from the stack \n";
         top--;
         if(top==-1){
            flag = 1;  
         }
      }
   }
   // Peek
   int peek(){
       if(top==-1){
          cout<<"Stack is empty \n";
          return -1;
       }
       else{
          return arr[top];
       }
   }
   // IsEmpty
   bool isEmpty(){
        return top == -1;

   }
   // IsSize
   int isSize(){
       
       return top+1;
   }
};

int main()
{
   Stack S(5);
   
   // S.push(5);
   // S.push(6);
   // S.push(8);
   // cout<<S.peek()<<endl;
   
   // S.pop();
   // cout<<S.isEmpty()<<endl;
   // cout<<S.isSize()<<endl;
   //S.pop();

   //...enter nagitive value in stack...
   //S.push(-1);
   //cout<<S.peek()<<endl;
   //S.push(-1);
   //....important logic....
   int value = S.peek();
   if(S.flag == 0){
       cout<<value<<endl;
   }


   
   

   return 0;
}