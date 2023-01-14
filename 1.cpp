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
        string s;
        cin>>s;
        int l = 0;
        int r=0;
        int ans=0;
        rep(i,0,n-1){
            if(s[i] == 'L' && s[i+1] == 'R'){
                l++;
                ans = i+1;
            }
            else if (s[i] == 'R' && s[i+1] == 'L')
                r++;
            }
        }
        if(r>0){
            cout<<0<<en;
        }
        else{
            if(l>0){
                cout<<ans<<en;
            }
            else{
                cout<<-1<<en;
            }
        }
    }
    return 0;
}
