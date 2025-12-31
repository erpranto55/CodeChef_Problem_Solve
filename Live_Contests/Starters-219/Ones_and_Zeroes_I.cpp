//https://www.codechef.com/START219C/problems/OZ1


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
        string s;
        cin >> s;
        int one = 0, zero = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
            if (one >= zero)
                cnt++;
        }
        cout << cnt << nl;
    }
    return 0;
}