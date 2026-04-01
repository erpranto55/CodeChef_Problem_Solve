//https://www.codechef.com/START232B/problems/MODTEMP

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
        int n, mn = INT_MAX, mx = INT_MIN;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > mn && a[i] < mx)
            {
                ans++;
            }
        }
        cout << ans << nl;
    }
    return 0;
}