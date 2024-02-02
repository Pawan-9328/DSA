#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Engineer
{
public:
   string specification;

   void work()
   {
      cout << " part of specification " << specification << endl;
   }
};

class Youtuber
{
public:
   int subscriber;

   void contentcreator()
   {
      cout << "contentcreator  " << subscriber << endl;
   }
};

class codeTeacher : public Engineer, Youtuber
{
public:
   string name;

   codeTeacher(string name, string specification, int subscriber)
   {
      this->name = name;
      this->specification = specification;
      this->subscriber = subscriber;
   }

   void show(){
      cout<<" show name "<<name<<endl;
      work();
      contentcreator();
   }
};

int main()
{
   codeTeacher c1("keshav", "MCA", 908);
   c1.show();

   return 0;
}