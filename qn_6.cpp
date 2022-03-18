#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;
    while (t--)

    {
        int n, x; // n is total no of qn and x is total marks
        cin >> n >> x;

        // {
        //     y = (x / 3 + (3 - x % 3)); // 24
        //     int z = 3 * y - x;
        //     if ((n - y) >= z)
        //     {
        //         cout << "YES" << endl;
        //         cout << y << z << n - y - z;
        //     }
        //     else
        //     {
        //         cout << "NO" << endl;
        //     }
        // }
        if (x % 3 == 0)
        {
            ll u = x / 3;
            cout << "YES" << endl;
            cout << x / 3 << " "
                 << "0"
                 << " "
                 << (n - u) << endl;
        }
        else

        {
            ll con = x / 3;
            ll p = (3 - (x % 3)) + x; // 24 ie the number divisible by 3
            ll r = p / 3;             // no. of full marks
            ll diff = n - r;
            ll function = (p - x);
            if (diff >= function)
            {
                cout << "YES" << endl;
                cout << r << " " << function << " " << (n - function - r) << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
