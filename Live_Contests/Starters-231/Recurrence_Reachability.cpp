//https://www.codechef.com/START231C/problems/SUPSKIP

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'
#define mod 1000000007
#define N 500005
ll fx[] = {0, 0, 1, -1, 1, 1, -1, -1};
ll fy[] = {1, -1, 0, 0, -1, 1, -1, 1};

int main()
{
    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m;
        cin >> n >> m;

        if (m <= n)
        {
            if (m == 1)
                cout << 1 << " " << 2 << nl;
            else
                cout << m - 1 << " " << m << nl;
            continue;
        }

        bool flag = false;
        for (int k = 2; k <= 30 && !flag; k++)
        {
            ll p = (1LL << k) - 1;
            for (int x = 1; x <= n && !flag; x++)
            {
                ll rem = m - x;

                if (rem <= 0)
                    continue;
                if (rem % p != 0)
                    continue;

                ll d = rem / p;
                ll y = x + d;

                if (y <= n && x < y)
                {
                    cout << x << " " << y << nl;
                    flag = true;
                }
            }
        }

        if (!flag)
            cout << -1 << nl;
    }
    return 0;
}