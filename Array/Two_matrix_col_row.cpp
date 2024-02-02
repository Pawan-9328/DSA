#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int brr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}

    };

    // row wise  print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "column wise print " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}