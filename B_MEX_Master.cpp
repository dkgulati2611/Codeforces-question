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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        int count0=0,count1=0;
        rep(i,0,n){
            cin>>a[i];
            if(a[i] == 0){
                count0++;
            }
            else if(a[i] == 1){
                count1++;
            }
        }
        
        if(count0 > (n+1)/2){
            if(count1 == n-count0 && count1 != 0){
                cout<<2<<en;
            }
            else{
                cout<<1<<en;
            }
        }
        else{
            cout<<0<<en;
        }

    }
    return 0;
}