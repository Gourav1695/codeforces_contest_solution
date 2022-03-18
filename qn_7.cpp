#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)

    {
        int N;
        // cin >> n;
        string str;
        cin >> str;
        N = str.size();
        int notPandS = 0, ans = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != str[0] && str[i] != str[N- 1])//checking the condition of subtring is not equal to the character of prefix and suffix
            {
                notPandS++;
            }
            else
            {
                notPandS = 0;
            }
            ans = max(ans, notPandS);//ans stores the value of max substring to be generated
        }
        if (ans == 0)
        {
            cout << "-1" << endl;//when not generated anything 
        }
        else
        {
            cout << ans << endl;//printing our answer
        }
    }
    return 0;
}
