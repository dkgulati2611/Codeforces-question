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
        int n;char c;string s;
        cin>>n>>c>>s;
        s += s;
        if(c=='g'){
            cout<<0<<en;
            continue;
        }
        vector<int> a;
        rep(i,0,2*n){
            if(s[i] == 'g'){
                a.push_back(i);
            }
        }
        int ans = INT_MIN;
        rep(i,0,n){
            if(s[i] == c){
                int len = *upper_bound(all(a),i);
                ans = max(ans,len-i);
            }
        }
        cout<<ans<<en;


    }
    return 0;
}