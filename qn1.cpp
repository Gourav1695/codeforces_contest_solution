#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        int k;
        cin >> n >> k;
        vector<int> arr1(n);
        vector<int> arr2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1.begin(), arr1.end());//sorting in acendind order
        sort(arr2.begin(), arr2.end(), greater<>());//sorting in decending order
        for (int i = 0; i < k; i++)
        {
            if (arr1[i] < arr2[i])
            {
                swap(arr1[i], arr2[i]);
            }
            else
            {
                break;
            }
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (long long)arr1[i];//taking sum of new arr1
        }
        cout << sum << endl;
    }

    return 0;
}