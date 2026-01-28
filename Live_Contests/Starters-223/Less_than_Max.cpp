// https://www.codechef.com/START223B/problems/LEQMAX

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
        int n;
        cin >> n;
        vector<int> a(n), dp(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0,mx = 0;

        for (int x : a)
        {
            if (x == 1)
            {
                cnt++;
                mx = max(mx, 1);
            }
            else
            {
                if (mx >= x - 1)
                {
                    cnt++;
                    mx = max(mx, x);
                }
            }
        }

        cout << cnt << nl;
    }
    return 0;
}