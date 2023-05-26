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
        int n,m;cin>>n>>m;
        vector<vector<long long>> a;
        rep(i,0,n){
            vector<long long>v;
            rep(j,0,m){
                long long x;cin>>x;
                v.push_back(x);
            }
            a.push_back(v);
        }
        long long ans= 0;
        rep(i,0,m){
            vector<long long>k;
            rep(j,0,n){
                k.push_back(a[j][i]);
            }
            sort(all(k));
            long long s = 0;
            rrep(j,n){
                s += 1ll*j*k[j]-1ll*(n-j-1)*k[j];
            }
            ans += s;
        }
        cout<<ans<<en;
    }
    return 0;
}