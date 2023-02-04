#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589793238462643383279)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
int main()
{
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        string k = "3141592653589793238462643383279";
        int count = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == k[i]){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<en;
    }
    return 0;
}