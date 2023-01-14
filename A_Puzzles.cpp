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
    int n, m, f[1000];
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> f[i];
    }
    sort(f, f + m);
    int least = f[n-1] - f[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (f[i+n-1] - f[i] < least)
        {
            least = f[i+n-1] - f[i];
        }
    }
    cout << least << endl;
    return 0;
}