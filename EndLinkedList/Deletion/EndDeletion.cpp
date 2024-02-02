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
   int arr[] = {2, 4, 6, 1, 8};
   head = createLinkedList(arr, 0, 2);

   //..Delete a Node At End.....

   if (head != NULL)
   {
      // Only one Node is present
      if (head->next == NULL)
      {
         Node *temp;
         delete temp;
         head = NULL;
      }
      //..More then 1 node is present
      else
      {
         Node *curr = head;
         Node *prev = NULL;

         // curr->next is not NULL

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