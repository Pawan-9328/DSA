#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getLenght(char name[])
{
    int i = 0;
    int lenght = 0;
    while (name[i] != '\0')
    {
        i++;
        lenght++;
    }
    return lenght;
}

int getReverse(char value[])
{
    int i = 0;
    int n = getLenght(value);
    int j = n - 1;
    while (i <= j)
    {
        swap(value[i], value[j]);
        i++;
        j--;
    }
}

int main()
{
    char name[100];
    cin.getline(name, 50);
    cout << "Reverse string value  is:- " << getReverse(name)<<endl;
    cout<<name<<endl;

    return 0;
}