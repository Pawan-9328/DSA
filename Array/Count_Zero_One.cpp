#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0,};
    int size = 15;
    int numZero = 0;
    int numOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            numZero++;
        }
        if (arr[i] == 1)
        {
            numOne++;
        }
    }
    cout << " one number count is:- " << numOne << endl;
    cout << " zero number count is:- " << numZero << endl;
    return 0;
}