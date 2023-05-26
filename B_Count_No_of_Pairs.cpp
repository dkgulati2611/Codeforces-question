// Silent26Knight aka DKG
#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define en '\n'
#define pi (3.141592653589)
#define mod 1e9 + 7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(j, i, n) for (int j = i; j < n; j++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int N = 26;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> big(N, 0), small(N, 0);
        for (auto &i : s)
        {
            if ('A' <= i && 'Z' >= i)
                big[i - 'A']++;
            else
                small[i - 'a']++;
        }
        int answer = 0;
        rep(i,0,N)
        {
            int pairs = min(small[i], big[i]);
            answer += pairs;
            small[i] -= pairs;
            big[i] -= pairs;
            int add = min(k, max(small[i], big[i]) / 2);
            k -= add;
            answer += add;
        }
        cout << answer << endl;
    }
    return 0;
}