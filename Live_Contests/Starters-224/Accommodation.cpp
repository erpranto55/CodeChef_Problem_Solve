//https://www.codechef.com/START224B/problems/ACMDT

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
        ll b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;
        if (x + y > n)
        {
            cout << -1 << nl;
            continue;
        }
        ll mn = (b + g + n - 1) / n;
        ll mx = min(b / x, g / y);
        if (mn > mx)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << mn << nl;
        }
    }
    return 0;
}