//https://www.codechef.com/START219C/problems/NEWOP


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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<vector<ll>> mn(n, vector<ll>(n)), mx(n, vector<ll>(n));
        for (int i = 0; i < n; i++)
        {
            mn[i][i] = a[i];
            mx[i][i] = a[i];
        }
        for (int i = 2; i <= n; i++)
        {
            for (int j = 0; j <= n - i; j++)
            {
                int k = j + i - 1;
                mx[j][k] = -1;
                mn[j][k] = -1;
                for (int l = j; l < k; l++)
                {
                    ll c_min = mn[j][l] + 2 * mn[l + 1][k];
                    ll c_max = mn[j][l] + 2 * mx[l + 1][k];

                    if (mn[j][k] == -1 || c_min < mn[j][k])
                        mn[j][k] = c_min;
                    if (c_max > mx[j][k])
                        mx[j][k] = c_max;
                }
            }
        }

        cout << mn[0][n - 1] << " " << mx[0][n - 1] << nl;
    }
    return 0;
}