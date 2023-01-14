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
        int n;cin>>n;
        vector<int> a(n);
        vector<int>eve,odd;
        rep(i,0,n){
            cin>>a[i];
            if(a[i]%2 == 0){
                eve.emplace_back(a[i]);
            }
            else{
                odd.emplace_back(a[i]);
            }
        }
        int ans = INT_MAX;
        if(odd.size()%2 == 0){
            cout<<0<<en;
        }
        else{
            rep(i,0,odd.size()){
                int k = 0;
                while(odd[i]%2!=0){
                    odd[i]/=2;
                    k++;
                }
                ans = min(ans,k);
            }
            rep(i,0,eve.size()){
                int k = 0;
                while(eve[i]%2!=1){
                    eve[i]/=2;
                    k++;
                }
                ans = min(ans,k);
            }
            cout<<ans<<en;
        }
    }
    return 0;
}