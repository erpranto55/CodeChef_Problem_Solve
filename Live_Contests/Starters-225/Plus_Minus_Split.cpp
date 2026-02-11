//https://www.codechef.com/START225B/problems/PSAS?tab=statement

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
        bool eq = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i > 0 && a[i] != a[0])
                eq = false;
        }

        if (eq)
        {
            cout << "Yes"<<nl;
        }
        else if (n == 2 && a[0] + a[1] == 0)
        {
            cout << "Yes"<<nl;
        }
        else
        {
            cout << "No"<<nl;
        }
    }
    return 0;
}