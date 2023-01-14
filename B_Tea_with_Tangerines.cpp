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
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto &it: a){
            cin>>it;
        }
        sort(all(a));
        int x = a[0];
        int ans = 0;
        rep(i,1,n){
            if(a[i]> 2*x-1){
                ans += ceil(a[i]/((2*x-1)*1.00)) - 1;
            }
        }
        cout<<ans<<en;
    }
    return 0;
}