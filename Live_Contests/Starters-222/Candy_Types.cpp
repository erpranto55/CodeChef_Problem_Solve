///https://www.codechef.com/START222C/problems/CANDYTYPE

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
        vector<int> freq(n+1,0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        int mx = 0;
        int ans = 1;

        for (int i = 1; i <= n; i++)
        {
            if (freq[i] > mx)
            {
                mx = freq[i];
                ans = i;
            }
        }

        cout << ans << nl;
    }
    return 0;
}