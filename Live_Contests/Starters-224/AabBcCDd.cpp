//https://www.codechef.com/START224B/problems/AABBCCDD

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
        vector<int> freq(26, 0);

        for (char c : s)
        {
            char lc = tolower(c);
            freq[lc - 'a']++;
        }
        int mx1 = 0, mx2 = 0;
        for (int f : freq)
        {
            if (f > mx1)
            {
                mx2 = mx1;
                mx1 = f;
            }
            else if (f > mx2)
            {
                mx2 = f;
            }
        }
        cout << mx1 + mx2 << nl;
    }
    return 0;
}