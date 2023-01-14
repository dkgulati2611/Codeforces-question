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
    int n;cin>>n;
    vector<int> a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    int m;cin>>m;
    vector<int> b(m);
    rep(i,0,m){
        cin>>b[i];
    }
    pair<int,int> ans;
    rep(i,0,n){
        rep(j,0,m){
            int t = a[i]+b[j];
            if(find(all(a),t) == a.end() && find(all(b),t) == b.end()){
                ans = {a[i],b[j]};
            }
        }
    }
    cout<<ans.first << " "<< ans.second <<en;
    return 0;
}