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
    int s,t;
    cin>>s>>t;
    vector<pair<int,int>>arr(t); 
    rep(i,0,t){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(all(arr),[&](pair<int,int>&a,pair<int,int>&b){
        return a.first<b.first;
    });
    bool ans=true;
    rep(i,0,t){
        if(s>arr[i].first){
            s+=arr[i].second;
        }
        else{
            ans = false;
            break;
        }
    }
    if(ans){
        cout<<"YES"<<en;
    }
    else{
        cout<<"NO"<<en;
    }
    return 0;
}