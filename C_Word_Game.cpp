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
        int n;cin>>n;
        vector<string> str;
        map<string,int> mp;
        rep(i,0,3*n){
            string s;cin>>s;
            str.push_back(s);
            mp[s]++;
        }
        int a=0,b=0,c=0;
        rep(i,0,n){
            if(mp[str[i]] == 1) a+=3;
            else if(mp[str[i]]==2) a+=1;
        }
        rep(i,n,2*n){
            if(mp[str[i]] == 1) b+=3;
            else if(mp[str[i]]==2) b+=1;
        }
        rep(i,2*n,3*n){
            if(mp[str[i]] == 1) c+=3;
            else if(mp[str[i]]==2) c+=1;
        }
        
        cout<<a<<" "<<b<<" "<<c<<en;

    }
    return 0;
}