#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
void solve(){
    int n;cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    rep(i,0,n){
        cin>>a[i];
        mp[a[i]]++;
    }
    if(mp.size() == 1 && n!= 1){
        cout<<"NO"<<en;
        return;
    }
    sort(a.begin(),a.end(),greater<int>());
    cout<<"YES"<<en;
    if(a[0] == a[1]){
        swap(a[0],a[n-1]);
    }
    for(auto i : a){
        cout<<i<<" ";
    }
    cout<<en;
}
int main()
{
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}