//https://www.codechef.com/START220C/problems/UPPATH

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
        vector<int> a1(n), a2(n);
        for (int i = 0; i < n; i++)
            cin >> a1[i];
        for (int i = 0; i < n; i++)
            cin >> a2[i];

        vector<int> low(n), high(n);

        for (int i = 0; i < n; i++)
        {
            low[i] = min(a1[i], a2[i]);
            high[i] = max(a1[i], a2[i]);
        }

        vector<int> pre(n, false), suf(n, false);
        pre[0] = low[0];
        for (int i = 1; i < n; i++)
            pre[i] = max(pre[i - 1], low[i]);
        suf[n - 1] = high[n - 1];
        for (int i = n - 2; i >= 0; i--)
            suf[i] = min(suf[i + 1], high[i]);

        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (pre[i] <= suf[i])
            {
                ok = true;
                break;
            }
        }
        cout << (ok ? "Yes" : "No") << nl;
    }
    return 0;
}