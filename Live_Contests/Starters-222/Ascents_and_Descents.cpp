//https://www.codechef.com/START222C/problems/ASCDESC


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
    int n, k;
    cin >> n >> k;
    vector<ll> p;
    if (n == 6)
    {
        p = {2, 4, 5, 1, 3, 6};
    }
    else
    {
        for (ll i = 2; i <= n; i += 2)
        {
            p.push_back(i);
        }
        for (int i = 1; i <= n; i += 2)
        {
            p.push_back(i);
        }
    }

    for (auto x : p)
    {
        cout << x << " ";
    }

    return 0;
}