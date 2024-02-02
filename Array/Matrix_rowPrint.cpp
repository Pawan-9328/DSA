#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void getRowMatrix(int arr[][3], int cols, int rows)
{
    cout << " printing row Sum " << endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

int main()
{
         {1,2,3},
         {4,5,6},
         {7,8,9}
      };
    
    int rows  = 3;
    int cols = 3;

    getRowMatrix(arr,rows,cols);
    return 0;
}