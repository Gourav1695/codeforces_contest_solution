#include <bits/stdc++.h>
using namespace std;
///I hope I will get uprating and don't make mistakes
///I will never stop programming
///sqrt(-1) Love C++
///Please don't hack me
///Gourav Yo
///Think different approaches (bs,dp,greedy,graphs,shortest paths,mst)
///Stay Calm
///Look for special cases
///Beware of overflow and array bounds
///Think the problem backwards
///Training
int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        long long int n;
        cin >> n;
        if (n < 6)
        {
            cout << "0" << endl;
        }

        else if (n == 6)
        {
            cout << "1" << endl;
        }
        else 
        {
            cout << (n+1) / 7 << endl;
        }
    }
}