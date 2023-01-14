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
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int x = (a%c == 0 ? a/c : a/c+1);
        int y = (b%d == 0 ? b/d : b/d+1);
        if(x+y<=k){
            cout<<x<<" "<<y<<en;
        }
        else{
            cout<<-1<<en;
        }
    }
    return 0;
}