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
        long long n;cin>>n;
        vector<long long>a(n);
        rep(i,0,n){
            cin>>a[i];
        }
        sort(all(a));
        long long sum = 1;
        if(a[0] != 1){
            cout<<"NO"<<en;
        }
        else{
            bool flag = true;
            rep(i,1,n){
                if(a[i] <= sum){
                    sum += a[i];
                    continue;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<en;
            }
            else{
                cout<<"NO"<<en;
            }
        }
    }
    return 0;
}