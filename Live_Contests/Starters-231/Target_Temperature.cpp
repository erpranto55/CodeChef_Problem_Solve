//https://www.codechef.com/START231C/problems/RESETZ

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "Yes" << '\n';
#define NA cout << "No" << '\n';
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
        sort(all(a));
        ll mx = a.back();
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1] && a[i] < mx)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            HA else NA
    }
    return 0;
}