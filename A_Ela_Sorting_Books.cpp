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
        int n,k;
        cin>>n>>k;
        string s;cin>>s;
        string res ="";
        map<char,int> mp;
        rep(i,0,n){
            mp[s[i]]++;
        }
        vector<int> count(26,0);
        for(auto it : mp){
            count[it.first - 'a']= it.second;
        }
        int m = k;
        while(m--){
            bool flag = 1;
            int j = 0;
            int mn = min(n/k,26);
            rep(i,0,mn){
                if(count[i] == 0){
                    flag= false;
                    break;
                }
                count[i]--;
                j++;
            }
            if(flag){
                res.push_back('a' + n/k);
            }
            else{
                res.push_back('a' + j);
            }
        }
        cout<<res<<en;
    }
    return 0;
}