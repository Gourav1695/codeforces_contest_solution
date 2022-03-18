#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int totalsum = 0;
    int sum = 0;
    int count1 = 0;

    vector<int> arr1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        totalsum += arr1[i];
    }
    sort(arr1.begin(), arr1.end(), greater<>());
    for (int i = 0; i < n; i++)
    {
        sum += arr1[i];
        count1++;
        if (sum > (totalsum / 2))
        {
            break;
        }
    }

    cout << count1 << endl;
    return 0;
}