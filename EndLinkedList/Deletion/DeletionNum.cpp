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
   Node* head;
   head = NULL;
   int arr[] = {2,4,6,1,8};
   head = createLinkedList(arr, 0, 5);

   head = NULL;

//...Delete a Node at start 
         if(head != NULL){
             Node* temp = head;
             head = head->next;
             delete temp; 
         }
 
   while(head){
         cout<<head->data<<" ";
         head = head->next;
   }
   return 0;
}

