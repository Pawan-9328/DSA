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

int main()
{
   Node *Head, *tail;
   tail = Head = NULL;
   int arr[] = {2,4,6,8,10};
  //...Insert the value at end...
  for(int i =0;i<5; i++){
        // ..LL is empty..
       if(Head== NULL){
       Head = new Node(arr[i]);
       tail = Head;
       }
       //..LL is not empty..
       else{
       tail->next = new Node(arr[i]);
       tail = tail->next;
       }
  }
  
  //..LL printing...
  Node* temp = Head;
  while(temp){
     cout<<temp->data<<" ";
     temp = temp->next;
  }
    
   return 0;
}