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

Node *CreateDLL(int arr[], int index, int size, Node *back)
{
   // base case
   if (index == size)
      return NULL;

   // Node Create Kro
   Node *temp = new Node(arr[index]);
   temp->prev = back;
   temp->next = CreateDLL(arr, index + 1, size, temp);
   return temp;
}

int main()
{

   Node *head = NULL;

   // Create doubly linked list
   int arr[] = {1, 2, 3, 4, 5};
   // Create it with Recursion

   head = CreateDLL(arr, 0, 5, NULL);

   // for (int i = 0; i < 5; i++)
   // {
   //    // Linked list doesn't exist
   //    if (head == NULL)
   //    {
   //       head = new Node(arr[i]);
   //       tail = head;
   //    }
   //    // Exits krti hai
   //    else
   //    {
   //       Node *temp = new Node(arr[i]);
   //       tail->next = temp;
   //       temp->prev = tail;
   //       ;
   //       tail = temp;
   //    }
   // }

   // Insert at start
   // Linked list does't exits
   // if (head == NULL)
   // {
   //    head = new Node(5);
   // }
   // // Already exits
   // else
   // {
   //    Node *temp = new Node(5);
   //    temp->next = head;
   //    head->prev = temp;
   //    head = temp;
   // }

   //...Insert Any given position...

   // int pos = 5;

   // // Insert at Start
   // if (pos == 0)
   // {

   //    // LL exist na ho
   //    if (head == NULL)
   //    {
   //       head = new Node(5);
   //    }
   //    // LL exits ho
   //    else
   //    {
   //       Node *temp = new Node(5);
   //       temp->next = head;
   //       head->prev = temp;
   //       head = temp;
   //    }
   // }
   // else
   // {
   //    Node *curr = head;
   //    // Go to the node, after which i have to insert
   //    while (--pos)
   //    {
   //       curr = curr->next;
   //    };

   //    // Insert at end
   //    if (curr->next == NULL)
   //    { // last node
   //       Node *temp = new Node(5);
   //       temp->prev = curr;
   //       curr->next = temp;
   //    }
   //    // Insert at middle
   //    else
   //    {
   //       Node *temp = new Node(5);
   //       temp->next = curr->next;
   //       temp->prev = curr;
   //       curr->next = temp;
   //       temp->next->prev = temp;
   //    }
   // }

   //.....Delete at Start....

   // if (head != NULL)
   // {
   //    //...Handle here if only one node exits....
   //    // If only Node exits
   //    if (head->next == NULL)
   //    {
   //       delete head;
   //       head = NULL;
   //    }

   //    // If more than 1 node exits
   //    else
   //    {
   //       Node *temp = head;
   //       head = head->next;
   //       delete temp;

   //       head->prev = NULL;
   //    }
   // }

   //....Delete At End Node....

   // if (head != NULL)
   // {

   //    //....If only 1 Node exits...
   //    if (head->next == NULL)
   //    {
   //       delete head;
   //       // head we point null because suppose koi any value exits ho
   //       head = NULL;
   //    }
   //    // ...More then one....
   //    else
   //    {
   //       Node *curr = head;
   //       while (curr->next)

   //          curr = curr->next;
   //          curr->prev->next = NULL;
   //          delete curr;

   //    }
   // }

   ///.....Delete at any position....

   int pos = 5;

   //...delete at Start
   if (pos == 1)
   {

      //...Handle here if only one node exits....
      // If only Node exits
      if (head->next == NULL)
      {
         delete head;
         head = NULL;
      }

      // If more than 1 node exits
      else

      {
         Node *temp = head;
         head = head->next;
         delete temp;

         head->prev = NULL;
      }
   }

   else
   {
       Node * curr = head;

       while(--pos ){
         curr = curr->next;
       }
      //...delete at end...
           if(curr->next == NULL){
              curr->prev->next  = NULL;
              delete curr;
           } 
           //...delete at middle...
           else{
              curr->prev->next = curr->next;
              curr->next->prev = curr->prev;
              delete curr;
           }

       
      
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