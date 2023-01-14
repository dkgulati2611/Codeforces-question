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
    int n,k;
    cin>>n>>k;
    int a = 2*n;
    int b = 5*n;
    int c = 8*n;
    int ans = (a%k == 0 ? a/k : a/k+1) + (b%k == 0 ? b/k : b/k+1) + (c%k == 0 ? c/k : c/k+1);
    cout<<ans<<en;
    return 0;
}