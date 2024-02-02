#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
   int data;
   Node *next;

   Node()
   {
      this->data = 0;
      this->next = NULL;
   }

   Node(int data)
   {
      this->data = data;
      this->next = NULL;
   }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
   // step1
   Node *newNode = new Node(data);

   // step 2
   newNode->next = head;
   // step 3  first node
   if (head == NULL)
   {
      // LL empty list, first node aab add hogi
      tail = newNode;
   }
   head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
   Node *newN = new Node(data);

   if (tail == NULL)
   {
      // first node aab add hone wali hai
      tail = newN;
      head = newN;
   }
   else
   { // ll non-empty
      tail->next = newN;
   }
}
int findLenght(Node *&head)
{
   int len = 0;
   Node *temp = head;
   while (temp != NULL)
   {
      temp = temp->next;
      len++;
   }
   return len;
}
void printNode(Node *&head)
{
   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
}

void insertAtPostion(int data, int position, Node *&head, Node *&tail)
{

   if (head == NULL)
   {
      Node *newNode = new Node(data);
      head = newNode;
      tail = newNode;
      return;
   }

   // step: find the position prev and curr
   if (position == 0)
   {
      insertAtHead(head, tail, data);
      return;
   }
   int len = findLenght(head);

   if (position >= len)
   {
      insertAtTail(head, tail, data);
      return;
   }
   // step3 find prev and curr

   int i = 1;
   Node *prev = head;
   while (i < position)
   {
      prev = prev->next;
      i++;
   }
   Node *curr = prev->next;
   Node *newNode = new Node();
   newNode->next = curr;
   prev->next = newNode;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
   if (head == NULL)
   {
      cout << " Linked list is empty " << endl;
   }

   if (position == 1)
   {
      Node *temp = head;
      head = head->next;
      temp->next = NULL;
      delete temp;
      return;
   }

   int len = findLenght(head);
   if (position == 1)
   {

      int i = 1;
      Node *prev = head;
      while (i < position - 1)
      {
         prev = prev->next;
         i++;
      }
      prev->next = NULL;
      Node *temp = tail;
      tail = prev;
      delete temp;
      return;
   }
   // deleting middle node
   int i = 1;
   Node *prev = head;
   while (i < position - 1)
   {
      prev = prev->next;
      i++;
   }
   Node *curr = prev->next;
   prev->next = curr->next;
   curr->next = NULL;
   delete curr;
}

int main()
{

   Node *head = NULL;
   Node *tail = NULL;
   insertAtHead(head, tail, 20);
   insertAtHead(head, tail, 40);
   insertAtHead(head, tail, 50);
   insertAtHead(head, tail, 60);
   insertAtHead(head, tail, 70);
   // insertAtTail(head, tail, 80);
   //  Node *second = new Node(20);
   //  Node *third = new Node(30);
   //  Node *fourth = new Node(40);
   //  Node *fifth = new Node(50);

   // first->next = second;
   // second->next = third;
   // third->next = fourth;
   // fourth->next = fifth;
   cout << "Printing Linkied List " << endl;
   printNode(head);
   cout << endl;
   // cout << " Head data : " << head->data << endl;
   // cout << " Tail data : " << tail->data << endl;

   // insertAtPostion(101, 3, head, tail);
   // cout << " after insert " << endl;
   // printNode(head);
   // cout << endl;
   // cout << " Head data : " << head->data << endl;
   // cout << " Tail data : " << tail->data << endl;
   deleteNode(3, head, tail);
   printNode(head);

   return 0;
}