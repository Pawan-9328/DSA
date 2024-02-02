#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
   int data;
   Node *next;

   // construtor...
   Node(int data)
   {
      this->data = data;
      this->next = NULL;
   }
   //....destructor...

   ~Node(){
        int value = this->data;
        //..memory free..
        if(this->next != NULL){
         delete next;
         this->next =NULL;
        }
        cout<<"memory is free  "<<value<<endl;
   }


};

void insertAtHead(Node *&head, int d)
{
   Node *temp = new Node(d);
   temp->next = head;
   head = temp;
}
void insertAtTail(Node *&tail, int d)
{
   Node *temp = new Node(d);
   tail->next = temp;
   tail = temp;
}

void printLikedlist(Node *&head)
{
   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout<<endl;
}

void insertAtMiddle(Node* &head,Node* &tail,  int position, int d)
{    
   if(position == 1){
      insertAtHead(head, d);
      return; 
   }
   Node *temp = head;
   int cnt = 1;

   while (cnt < position - 1)
   {
      temp = temp->next;
      cnt++;
   }

   if(temp->next == NULL){
      insertAtTail(tail, d);
      return ;
   }

   Node *middleNode = new Node(d);
   middleNode->next = temp->next;
   temp->next = middleNode;
}

void deleteNode(int position, Node* &head){
   //...deleting first or stating node... 
     if(position==1){
      Node* temp = head;
      head = head->next;
      //memory free start node..
      temp->next = NULL;
      delete temp;
     }
     else{
            //deleting any middle node or last node..
            Node* curr  = head;
            Node* prev = NULL;
            int cnt  = 1;
            while(cnt<position){
                prev = curr;
                curr = curr->next;
                cnt++;
            }
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
     }
}

int main()
{
   Node *node = new Node(6);
   // cout<<node->data<<" ";
   // cout<<node->next<<" ";
   // head pointer

   Node *head = node;
   Node *tail = node;
   Node* middleNode =node;
   printLikedlist(head);
   // insertAtHead(head, 66);
   // printLikedlist(head);
   insertAtTail(tail, 89);
   insertAtMiddle(head,tail, 3, 78);
   printLikedlist(head);
   deleteNode(3,head);
   printLikedlist(head);

   return 0;
}