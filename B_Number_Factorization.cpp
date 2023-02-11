#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<=n;j++)
int main()
{
    int t;cin>>t;
    while(t--){
        // int n;
        // cin>>n;
        // vector<int> factors;
        // vector<int> st(32,1);
        // // long long sum = 0;
        // rep(i,2,sqrt(n)){
        //     int j = 0;
        //     while(n%i == 0){
        //         factors.push_back(i);
        //         st[j] *= i;
        //         j++;
        //         // sum += i;
        //         n /= i;
        //     }
        // }
        // if(n!= 1){
        //     // sum += n;
        //     st[0] *= n;
        // }
        // int ans = 0;
        // rep(i,0,st.size()){
        //     if(st[i] == 1){
        //         continue;
        //     }
        //     ans += st[i];
        // }
        int n;cin>>n;
        vector<int> factors;
        vector<int> st(32,1);
        rep(i,2,sqrt(n)){
            int j = 0;
            // cout<<i<<" ";
            while(n%i == 0){
                factors.push_back(i);
                st[j] *= i;
                // cout<<j<<" ";
                j++;
                n /= i;
            }
        }
        if(n!=1){
            st[0] *= n;
        }
        int ans = 0;
        rep(i,0,31){
            if(st[i] == 1){
                continue;
            }
            ans += st[i];
            // cout<<ans<<" ";
        }
        cout<<ans<<en;
    }
    return 0;
}