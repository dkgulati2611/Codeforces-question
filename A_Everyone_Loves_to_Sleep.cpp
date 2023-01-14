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
        int n,h,m;
        cin>>n>>h>>m;
        pair<int,int>p= {h,m};
        vector<pair<int,int>> a(n);
        for(auto &it : a){
            cin>>it.first >> it.second;
        }
        sort(all(a));
        auto lb = lower_bound(all(a),p)-a.begin();
        auto ub = upper_bound(all(a),p)-a.begin();
        if(lb!=ub){
            cout<<0<<" "<<0<<en;
        }
        else if(ub == n){
            int mm = 60-m,hh=23-h;
            int fmm = mm + a[0].second;
            int carry = fmm/60;
            fmm = fmm%60;
            int fhh = hh + carry + a[0].first;
            cout<<fhh << " "<<fmm<<en;
        }
        else{
            if(a[ub].second<m){
                a[ub].second+=60;
                a[ub].first--;
            }
            cout<<a[ub].first-h << " "<<a[ub].second-m<<en;
        }
    }
    return 0;
}