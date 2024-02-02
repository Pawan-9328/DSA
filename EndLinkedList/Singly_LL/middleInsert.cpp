#include<iostream>
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



int main(){
   Node* Head;
   Head = NULL;

  int arr[] = {2,4,6,8,10};
   
   

// print
Node* temp;
temp = Head;

   while (temp)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
   return 0;
}