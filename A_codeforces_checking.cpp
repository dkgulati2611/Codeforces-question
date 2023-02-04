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
        char c;cin>>c;
        map<char,int> mp;
        mp['c'] = 1;
        mp['o'] = 1;
        mp['d'] = 1;
        mp['e'] = 1;
        mp['f'] = 1;
        mp['r'] = 1;
        mp['s'] = 1;
        if(mp.find(c)==mp.end()){
            cout<<"NO"<<en;
        }
        else{
            cout<<"YES"<<en;
        }
    }
    return 0;
}