//Silent26Knight aka DKG
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define ll long long 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<=n;j++)
int main()
{
    int t;cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int ans=-1,pos=0;
        rep(i,x,y){
            int k=i,mx=0,mn=INT_MAX;
            while(k){
                mx=max(mx, k%10);
                mn=min(mn, k%10);
                k/=10;
            }
            if(mx-mn>ans){ans=mx-mn;pos=i;}
            if(ans==9)break;
        }
        cout<<pos<<endl;
        
    }
    return 0;
}