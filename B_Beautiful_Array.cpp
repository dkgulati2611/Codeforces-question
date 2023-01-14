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
        int n;
        long long k,b,s;
        cin>>n>>k>>b>>s;
        bool val = false;
        vector<int> ans(n,0);
        if(s/k == b){
            ans[n-1] = s;
            val = true;
        }
        else if(s/k > 2*b){
            cout<<-1<<en;
            val = false;
        }
        else{
            
        }
    }
    return 0;
}
