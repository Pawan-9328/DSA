#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
   int data;
   Node *next;
   Node *prev;

   Node(int value)
   {
      data = value;
      next = prev = NULL;
   }
};

int main()
{

   Node *head = NULL;

   // Insert at start

   // Linked list does't exits
   if (head == NULL)
   {
      head = new Node(5);
   }
   // Already exits
   else
   {
      Node *temp = new Node(5);
      temp->next = head;
      head->prev = temp;
      head = temp;
   }
   // value print..

   Node *trav = head;
   while (trav)
   {
      cout << trav->data << " ";
      trav = trav->next;
   }
   return 0;
}