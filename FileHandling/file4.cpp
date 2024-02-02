#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
   ofstream fout;
   fout.open("z1.txt");
   fout<<" Hello \n";
   fout<<" keshav \n";
   fout.close();
    ifstream fin;
    fin.open("z1.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
   return 0;
}