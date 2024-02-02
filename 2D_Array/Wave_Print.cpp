#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void waveMatrix(int arr[][4], int rows, int cols)
{
    for (int j = 0; j < cols; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < rows; i++)

                cout << arr[i][j] << " ";
        }
        else
        {
            for (int i = rows - 1; i >= 0; i--)
                cout << arr[i][j] << " ";
        }
    }
}

int main()
{
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int rows = 3;
    int cols = 4;

    waveMatrix(arr1, rows, cols);
    return 0;
}