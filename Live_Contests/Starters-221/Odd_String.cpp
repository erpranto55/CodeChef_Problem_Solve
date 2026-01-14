//https://www.codechef.com/START221C/problems/LMP2

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
            freq[c - 'a']++;
        }
        bool flag = true;
        for (int f : freq)
        {
            if (f >= 3)
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