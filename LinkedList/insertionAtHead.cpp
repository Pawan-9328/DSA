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
   Node *head;
   head = NULL;
   // cout << head->data << endl;
   // cout << head->next << endl;

   int arr[] = {2, 4, 6, 8, 10};

   for (int i = 0; i < 5; i++)
   {

      if (head == NULL)
      {
         head = new Node(arr[i]);
         cout<<" run code "<<endl;
      }
      else
      {
         Node *temp;
         temp = new Node(arr[i]);
         temp->next = head;
         head = temp;
      }
   }

   // printing the value...

   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data<<" " ;
      temp = temp->next;
   };

   return 0;
}