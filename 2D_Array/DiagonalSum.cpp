#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void diagonalSum(int matrix[][3], int row, int col)
{
    int first = 0;
    int sec = 0;

    // first diagonal
    int i = 0;
    while (i < row)
    {
        first += matrix[i][i];
        i++;
    }

    // second
    i = 0;
    int j = col - 1;
    while (j >= 0)
    {
        sec += matrix[i][j];
        i++, j--;
    }

    cout << first << " " << sec << endl;
}

int main()
{
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    diagonalSum(matrix,3,3);

    return 0;
}