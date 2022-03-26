#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)

    {
        int a, b, x, y;
        int count = 0;
        cin >> x >> y >> a >> b;
        if (x != a&& y != a)
        {
            count++;
        }
        if (x != b && y!= b)
        {
            count++;
        }
        cout << count << endl;
    }
}