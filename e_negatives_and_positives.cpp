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
        vector<long long> a(n);
        rep(i,0,n){
            cin>>a[i];
        }
        int c = 0;
        vector<long long> b;
        long long sum = 0;
        rep(i,0,n){
            b.push_back(abs(a[i]));
            if(a[i] < 0){
                c++;
            }
            sum += abs(a[i]);
        }
        sort(all(b));
        if(c&1){
            cout<<sum - 2*b[0]<<en;
        }
        else{
            cout<<sum<<en;
        }
    }

    return 0;
}