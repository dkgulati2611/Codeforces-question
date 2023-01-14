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
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    rep(i,0,n){
        cin>>a[i];
    }
    rep(i,0,m){
        cin>>b[i];
    }
    vector<int> ans;
    rep(i,0,n){
        if(find(all(b),a[i]) != b.end()){
            ans.push_back(a[i]);
        }
    }
    rep(i,0,ans.size()){
        cout<<ans[i]<< " ";
    }
    return 0;
}