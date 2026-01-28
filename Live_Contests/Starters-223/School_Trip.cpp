//https://www.codechef.com/START223B/problems/SCHOOLTRIP

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
        int n, x, k;
        cin >> n >> x >> k;

        int ans = x;
        for (int y = 0; y <= n; y += k) {
            ans = min(ans, abs(x - y));
        }
        cout << ans << nl;
    }
    return 0;
}