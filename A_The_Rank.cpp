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
    vector<pair<int,int>> a;
    rep(i,1,n+1){
        int q,w,e,r;
        cin>>q>>w>>e>>r;
        int sum = (q+w+e+r);
        a.push_back({sum,i});
    }
    sort(all(a),[&](pair<int,int> &a,pair<int,int> &b){
        if(a.first == b.first){
            return (a.second < b.second);
        }
        return (a.first > b.first);
    });
    int k = 1;
    for(auto it : a){
        if(it.second == 1){
            break; 
        }
        k++;
    }
    cout<<k<<en;
    return 0;
}