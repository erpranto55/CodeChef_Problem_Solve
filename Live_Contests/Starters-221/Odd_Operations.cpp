//https://www.codechef.com/START221C/problems/LMP3


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

bool od(ll n)
{
    while (n)
    {
        if ((n % 10) % 2 == 1)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}

int main()
{
    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;

        if (n % 2 == 1)
        {
            cout << 0 << nl;
            continue;
        }
        if (od(n))
        {
            cout << 1 << nl;
            continue;
        }

        if (n < 10)
        {
            cout << -1 << nl;
            continue;
        }

        bool two = false;
        ll tmp = n;
        while (tmp)
        {
            int d = tmp % 10;
            if (d != 0)
            {
                ll m = n - d;
                if (m > 0 && od(m))
                {
                    two = true;
                    break;
                }
            }
            tmp /= 10;
        }

        if (two)
            cout << 2 << nl;
        else
            cout << 3 << nl;
    }
    return 0;
}
