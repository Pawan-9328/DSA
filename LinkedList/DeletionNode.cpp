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
Node *createLinkedList(int arr[], int index, int size)
{
   if (index == size)
      return NULL;

   Node *temp = new Node(arr[index]);
   temp->next = createLinkedList(arr, index + 1, size);
   return temp;
}

int main()
{
   Node *head;
   head = NULL;
   int arr[] = {2, 4, 6, 1, 7};
   head = createLinkedList(arr, 0, 4);

   //........delete head node.......
   //  if(head!=NULL){
   //        Node* temp = head;
   //        head = head->next;
   //        delete temp;
   //  }

   //......dleete node..
   if (head != NULL)
   {
      // 1 node exits
      if (head->next == NULL)
      {
         Node *temp = head;
         delete temp;
         head = NULL;
      }
      //..more then  node case...
      else
      {
         Node *curr = head;
         Node *prev = NULL;
         // curr->next is not null

         while (curr->next != NULL)
         {
            prev = curr;
            curr = curr->next;
         }
         prev->next = curr->next;
         delete curr;
      }
   }

   while (head)
   {
      cout << head->data << " ";
      head = head->next;
   }

   return 0;
}