//Silent26Knight aka DKG
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define ll long long 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,d,w;
        cin>>n>>k>>d>>w;
        vector<int> a(n+1);
        rep(i,1,n+1){
            cin>>a[i];
        }
        int ans =1;
        int p = 1;
        rep(i,1,n+1){
            if(a[i]-a[p]-w>d||i-p+1>k){
                p=i;
                ans++;
            }
        }
        cout<<ans<<en;
    }
    return 0;
}