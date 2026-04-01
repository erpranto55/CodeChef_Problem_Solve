//https://www.codechef.com/START232B/problems/FOODRES

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

bool isPossible(int d, vector<int> &a, int m)
{
    if (d == 0)
        return true;
    ll support = 0;
    for (int food : a)
    {
        support += food / d;
    }
    return support >= m;
}

int main()
{
    FAST;
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int total = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
        mx = max(mx, a[i]);
    }
    if (total < m)
    {
        cout << 0 << nl;
        return 0;
    }

    int low = 1, high = mx, ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isPossible(mid, a, m))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << ans << nl;
    return 0;
}