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
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(auto &it : a){
        cin>>it.first>>it.second;
    }
    sort(all(a),[&](pair<int,int> &a, pair<int,int> &b){
        return a.first<b.first;
    });
    bool ans = false;
    rep(i,1,n){
        if(a[i-1].second > a[i].second){
            ans = true;
        }
    }
    cout<<(ans ? "Happy Alex" : "Poor Alex")<<en;
    
    
    return 0;
}