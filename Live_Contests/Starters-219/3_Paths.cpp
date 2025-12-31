//https://www.codechef.com/START219C/problems/PATH3


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
        if (n == 2)
        {
            cout << -1 << nl;
            continue;
        }

        vector<vector<int>> v(n, vector<int>(n, 0));
        v[0][0] = 1;
        v[0][1] = 1;
        v[0][2] = 1;
        v[1][1] = 1;
        v[1][2] = 1;
        v[2][1] = 1;
        v[2][2] = 1;

        for (int i = 3; i < n; i++)
            v[2][i] = 1;
        for (int i = 3; i < n; i++)
            v[i][n-1] = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << nl;
        }
    }
    return 0;
}