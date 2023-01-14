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
    int x;cin>>x;
    rep(i,1,x+1){
        rep(j,1,x+1){
            if(i*j > x && i%j == 0 && i/j < x){
                cout<<i<<" "<<j<<en;
                return 0;
            }
        }
    }
    cout<<-1<<en;
    return 0;
}