
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll n, k;//k=total no.of mice,n=total position
        cin >> n >> k;
        vector<ll> a(k);
        for (int i = 0; i < k; i++)
            cin >> a[i];

        sort(a.begin(), a.end(),greater<>());

        ll cp = 0;
        ll count1 = 0;
        for (int i = 0; i < k; i++)
        {
            if (cp < a[i])//checking the condion of cat catch mice or not
            {
                cp += (n - a[i]);//counting the position of cat
                count1++;//no.of mice saved
            }
            else
                break;
        }
        cout << count1 << endl;
    }
    return 0;
}
