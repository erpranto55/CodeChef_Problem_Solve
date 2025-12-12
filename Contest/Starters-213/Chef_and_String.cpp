// https://www.codechef.com/problems/WENOTI

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define HA cout << "YES\n"
#define NA cout << "NO\n"
#define nl '\n'

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        ll n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        stack<char> st;
        vector<char> f;

        for (char c : str)
        {
            if (c == 'I')
                continue;
            st.push(c);
        }

        while (!st.empty())
        {
            f.push_back(st.top());
            st.pop();
        }
        reverse(f.begin(), f.end());
        ll pairs = n * k - 1;
        if (f.empty())
        {
            cout << pairs << nl;
            continue;
        }
        ll x = 0;
        stack<char> st2;

        for (char c : f)
        {
            if (st2.empty())
            {
                st2.push(c);
            }
            else
            {
                if (st2.top() != c)
                    x++;
                st2.push(c);
            }
        }
        ll y = 0;
        if (f.front() != f.back())
        {
            y = 1;
        }
        else
        {
            y = 0;
        }
        ll forced = (x * k) + (y * (k - 1));
        ll ans = pairs - forced;

        cout << ans << nl;
    }
    return 0;
}