#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool divide(vector<int> arr)
{
    int prefix = 0, total_sum = 0, n = arr.size();
    // Total sum
    for (int i = 0; i < n; i++)
    
        total_sum += arr[i];

        for (int i = 0; i < n; i++)
        {
            prefix += arr[i];
              //int ans = total_sum - prefix;
            if (total_sum == 2*prefix)
                return 1;
            
        }
    
    return 0;
}

int main()
{
    int n;
    cout << " Enter the element " << endl;
    cin >> n;
    vector<int> v(n);
    cout << " Enter the element in array" << endl;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << divide(v) << endl;

    return 0;
}