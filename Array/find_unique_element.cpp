#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getUnique(vector<int> arr)
{
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the size of Array " << endl;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int findValue = getUnique(arr);
    cout << "Entire array unique element is:- " << findValue << endl;
    return 0;
}