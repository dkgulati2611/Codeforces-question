#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
int main()
{
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] += 1;
        }
        int ans = n;
        int last = -1;
        int cnt = 0;
        for (auto& p : mp) {
        if (p.first == last + 1) {
            ans -= min(p.second, cnt);
        }
        last = p.first;
        cnt = p.second;
        }
        cout << ans << '\n';
    }
    return 0;
}