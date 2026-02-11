// https://www.codechef.com/START225B/problems/NOADJK

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
        int n, k;
        cin >> n >> k;
        vector<ll> a(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (int i = 1; i <= k; i++)
        {
            for (int j = max(i + 2, n - k + 1); j <= n && j - i <= k; j++)
            {
                ans = max(ans, abs(a[j] - a[i]));
            }
        }
        cout << ans << nl;
    }
    return 0;
}