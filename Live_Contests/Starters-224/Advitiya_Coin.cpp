//https://www.codechef.com/START224B/problems/ADC

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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll mn = a[0], mx = a[0];
        ll ans = 0;

        for (int i = 1; i < n; i++)
        {
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);

            if (mx - mn > k)
            {
                ans++;
                if (i + 1 < n)
                {
                    mn = a[i + 1];
                    mx = a[i + 1];
                    i++; 
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}