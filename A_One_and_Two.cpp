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
        int n;
        cin>>n;
        vector<int> a(n);
        int count = 0;
        rep(i,0,n){
            cin>>a[i];
            if(a[i] == 2){
                count++;
            }
        }
        int count1 = 0,ans = 1;
        if(count%2 != 0){
            cout<<-1<<en;
        }
        else{
            rep(i,0,n){
                if(a[i] == 2){
                    count1++;
                    if(count1 == count/2){
                        ans = i+1;
                        break;
                    }
                }
            }
            cout<<ans<<en;
        }
    }
    return 0;
}