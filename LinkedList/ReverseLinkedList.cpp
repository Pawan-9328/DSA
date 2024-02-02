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
      this->data = value;
      this->next = NULL;
   }
};

void insertAtHead(Node *&head, int d)
{
   Node *temp = head;
   temp->next = head;
   head = temp;
}

//   Node reverseLinked(Node* &head)
// {
//    if (head == NULL || head->next == NULL)
//    {
//       return head;
//    }
//    else
//    {
//       Node *prev = NULL;
//       Node *curr = head;
//       Node *forword = NULL;
//       while (curr != NULL)
//       {
//          forword = curr->next;
//          curr->next = prev;
//          prev = curr;
//          curr = forword;
//       }
//    }
   
// }

void printLinked(Node *&head)
{
   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;
}

int main()
{ 

   Node* head;
   head = NULL;
   printLinked(head);
   insertAtHead(head, 100);
   printLinked(head);
  // reverseLinked(head);
   printLinked(head);

   return 0;
}