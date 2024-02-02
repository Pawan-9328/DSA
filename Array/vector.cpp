#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr;

    int ans = (sizeof(arr) / sizeof(int));
    cout << ans << endl;

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    // insert

    arr.push_back(5);
    arr.push_back(6);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}