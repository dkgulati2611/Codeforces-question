//Silent26Knight aka DKG
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
        long long x,y;
        cin>>x>>y;
        vector<int> ans;
        int temp = y;
        while(temp <= x){
            ans.push_back(temp);
            temp++;
        }
        int n = ans.size();
        if(ans[0] + 1 != ans[n-1] || ans[0] != ans[n-1]+1){
            int temp2 = x-1;
            while(temp2>y){
                ans.push_back(temp2);
                temp2--;
            }
        }
        cout<<ans.size()<<en;
        rep(i,0,ans.size())
        cout<<ans[i]<<" "; 
        cout<<en; 
    }
    return 0;
}