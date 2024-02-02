#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
   int data;
   Node *next;

   Node(int d)
   {
      this->data = d;
      this->next = NULL;
   }

   ~Node()
   {
      int value = this->data;
      if (this->next != NULL)
      {
         delete next;
         next = NULL;
      }
      cout << " Memory free node and data " << value << endl;
   }
};

void insertNode(Node *&tail, int element, int d)
{
   // empty list
   if (tail == NULL)
   {
      Node *newNode = new Node(d);
      tail = newNode;
      newNode->next = newNode;
   }
   else
   {
      // non empty case
      Node *curr = tail;
      while (curr->data != element)
      {
         curr = curr->next;
      }
      // element found-> curr is representing element  node
      Node *temp = new Node(d);
      temp->next = curr->next;
      curr->next = temp;
   }
}



void deleteNode(Node* &tail, int value){
 // LL is empty 
 if(tail==NULL){
     cout<<" Linked List is empty, pls check again "<<endl;
     return; 
 }
 else{
       //non-empty 
       //assuming that value is present in the linked list..
       Node* prev = tail;
       Node* curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
   //...1 Node Linked List...
        if( curr==prev){
               tail = NULL;
        }
        //...2 Node linked... 
        if(tail==curr){
           tail = prev;
        }
        curr->next = NULL;
        delete curr;
        
 }
}
 void print(Node* tail)
{
   Node *temp = tail;
   if(tail==NULL){
          cout<<"LL is empty "<<endl;
          return;
   }
   do{
      cout << tail->data << " ";
      tail = tail->next;
   }while (tail != temp);
   {
    cout << endl;
   }
   
}
      

int main()
{
   Node *tail = NULL;
   //print(tail);
   insertNode(tail, 5, 3);
   print(tail);
   // insertNode(tail, 3, 5);
   // print(tail);
   // insertNode(tail, 5, 7);
   // print(tail);
   // insertNode(tail, 7, 9);
   // print(tail);
   // insertNode(tail, 9, 10);
   // print(tail);
   // print(tail);
   deleteNode(tail,3);
   print(tail);

   return 0;
}