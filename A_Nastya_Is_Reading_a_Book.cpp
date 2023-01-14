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
    rep(i,0,n){
        cin>>a[i].first>>a[i].second;
    }
    int k;cin>>k;
    int j = 1;
    rrep(i,n){
        if(k >= a[i].first && k<=a[i].second)
        break;
        j++;
    }
    cout<<j<<en;

    return 0;
}