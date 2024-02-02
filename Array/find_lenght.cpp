#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getLength(char name[])
{
    int i = 0;
    int lenght = 0;
    while (name[i] != '\0')
    {
        lenght++;
        i++;
    }

    return lenght;
}

int main()
{
    char name[100];
    cin.getline(name, 100);
    cout << "String lenght is:- " << getLength(name);
    return 0;
}