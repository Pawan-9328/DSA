#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int twoSum(int arr[], int n, int target)
{

    vector<int> ans;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.push_back(arr[i]), ans.push_back(arr[j]);
                break;
            }
        }
    }
}

int main()
{
    int arr[5] = {2, 7, 11, 15, 27};
    int n = 5;
    int target = 22;
    int finalAns = twoSum(arr, n , target);

    cout<<" target value is "<<finalAns<<endl;



    return 0;
}