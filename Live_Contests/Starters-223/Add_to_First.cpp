//https://www.codechef.com/problems/ADDFIRST


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
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll mx = 0;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                flag = false;
                continue;
            }
            if (a[i] < b[i] && a[i] <= mx)
            {
                flag = false;
                break;
            }
            mx = max(mx, a[i]);
        }
        if (flag)
            cout << "Yes" << nl;
        else
        cout << "No" << nl;
    }
    return 0;
}