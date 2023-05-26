//Silent26Knight aka DKG
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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n-1),ans(n);
        rep(i,0,n-1){
            cin>>a[i];
        }
        ans[0] = a[0];
        ans[n-1] = a[n-2];
        rep(i,0,n-2){
            ans[i+1] = min(a[i],a[i+1]);
        }
        rep(i,0,n){
            cout<<ans[i]<<" ";
        }
        cout<<en;
    }
    return 0;
}