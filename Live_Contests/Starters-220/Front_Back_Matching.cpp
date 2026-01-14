//https://www.codechef.com/START220C/problems/FBMATCHc

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'
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
        string s;
        cin >> n >> s;

        vector<int> freq(26, 0);
        for (char c : s)
        {
            freq[c - 'a']++;
        }

        bool possible = false;
        for (int f : freq)
        {
            if (f >= 2)
            {
                possible = true;
                break;
            }
        }

        cout << (possible ? "Yes" : "No")<<nl;
    }
    return 0;
}