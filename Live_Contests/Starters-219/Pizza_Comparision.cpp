//https://www.codechef.com/START219C/problems/PIZZACOMP

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
        int a, b;
        cin >> a >> b;
        int smal = b * 100, big = a * 225;
        if (smal > big)
            cout << "Small"<<nl;
        else if (smal < big)
            cout << "Large"<<nl;
        else
            cout << "Equal"<<nl;
    }
    return 0;
}