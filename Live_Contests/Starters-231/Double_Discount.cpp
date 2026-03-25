//https://www.codechef.com/START231C/problems/DBDISC

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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ll mx_cost = max(a[i], a[j]);
                ll mn_cost = min(a[i], a[j]);
                ll disc = min(mx_cost / 2LL, 100LL);
                ll cost = mx_cost + mn_cost - disc;

                if (cost <= k)
                {
                    ans = max(ans, b[i] + b[j]);
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}