#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
   int data;
   Node *next;
   Node *prev;

   Node(int d)
   {
      this->data = d;
      this->prev = NULL;
      this->next = NULL;
   }
   ~Node()
   {
      int val = this->data;
      if (next != NULL)
      {
         delete next;
         next = NULL;
      }
      cout << " Memory free data " << val << endl;
   }
};

void insertAtHead(Node *&head, Node *tail, int d)
{
   if (head == NULL)
   {
      Node *temp = new Node(d);
      head = temp;
      tail = temp;
   }
   else
   {
      Node *temp = new Node(d);
      temp->next = head;
      head->prev = temp;
      head = temp;
   }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{

   if (tail == NULL)
   {
      Node *temp = new Node(d);
      tail = temp;
      head = temp;
   }
   else
   {
      Node *temp = new Node(d);
      tail->next = temp;
      temp->prev = tail;
      tail = temp;
   }
}

//...insert at any postion.....

void insertAtMiddle(Node *&head, Node *&tail, int position, int d)
{
   if (position == 1)
   {
      insertAtHead(head, tail, d);
      return;
   }
   Node *temp = head;
   int cnt = 1;

   while (cnt < position - 1)
   {
      temp = temp->next;
      cnt++;
   }

   if (temp->next == NULL)
   {
      insertAtTail(head, tail, d);
      return;
   }

   Node *middleNode = new Node(d);
   middleNode->next = temp->next;
   temp->next->prev = middleNode;
   temp->next = middleNode;
   middleNode->prev = temp;
}

//....Deleteing node....

void deleteNode(int position, Node *&head)
{
   if (position == 1)
   {
      Node *temp = head;
      temp->next->prev = NULL;
      head = temp->next;
      temp->next = NULL;
      delete temp;
   }
   else
   {
      Node *curr = head;
      Node *prev = NULL;

      int cnt = 1;
      while (cnt < position)
      {
         prev = curr;
         curr = curr->next;
         cnt++;
      }
      curr->prev = NULL;
      prev->next = curr->next;
      curr->next = NULL;

      delete curr;
   }
}

// traverse of linked list
void LinkedPrint(Node *&head)
{
   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;
}
// length of linked list
int getLength(Node *&head)
{
   int len = 0;
   Node *temp = head;
   while (temp != NULL)
   {
      len++;
      temp = temp->next;
   }
   return len;
}
int main()
{
   // Node *node = new Node(10);
   Node *head = NULL;
   Node *tail = NULL;

   insertAtHead(head, tail, 10);
   LinkedPrint(head);
   insertAtHead(head, tail, 30);
   insertAtHead(head, tail, 40);

   insertAtTail(head, tail, 300);
   insertAtMiddle(head, tail, 1, 101);
   insertAtHead(head, tail, 400);
   LinkedPrint(head);
   deleteNode(2,head);
   LinkedPrint(head);

   return 0;
}