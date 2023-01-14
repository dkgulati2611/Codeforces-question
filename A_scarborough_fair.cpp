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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i = 0;i<k;i++){
        int l,r;
        char c1,c2;
        cin>>l>>r>>c1>>c2;
        for(int j = l-1;j<r;j++){
            if(s[j] == c1){
                s[j] = c2;
            }
            else{
                continue;
            }
        }
        // cout<<s<<en;
    }
    cout<<s<<en;
    return 0;
}