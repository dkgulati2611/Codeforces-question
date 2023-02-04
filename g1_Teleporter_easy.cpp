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
    int t;
    cin>>t;
    while(t--){
        long long n,c;
        cin>>n>>c;
        vector<long long> a(n);
        rep(i,0,n){
            cin>>a[i];
            a[i]+= i+1;
        }
        int ans = 0;
        sort(all(a));
        rep(i,0,n){
            if(a[i] <= c){
                ans ++;
                c-=a[i];
            }
        }
        cout<<ans<<en;
    }
    return 0;
}