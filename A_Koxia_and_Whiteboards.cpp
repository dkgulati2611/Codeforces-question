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
        int m,n;
        cin>>n>>m;
        vector<long long>a(n),b(m);
        priority_queue<int,vector<int>,greater<int>> pq;
        rep(i,0,n){
            cin>>a[i];
            pq.emplace(a[i]);
        }
        rep(i,0,m){
            cin>>b[i];
            // pq.emplace(b[i]);
        }
        for(long long i=0; i<m; i++) {
            pq.pop();
            pq.push(b[i]);
        }
        long long sum=0;
        while(!pq.empty()) {
            sum+=pq.top();
            pq.pop();
        }
            
        cout<<sum<<en;
            
    }
    return 0;
}