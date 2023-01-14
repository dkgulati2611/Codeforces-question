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
        int n,m;
        cin>>n>>m;
        vector<long long> a(n+1),b;
        rep(i,1,n+1){
            cin>>a[i];
        }
        if(n==1){
            cout<<0<<en;
        }
        else{
            rep(i,1,m+1){
                b.emplace_back(a[i]);
            }
            b.emplace_back(0);
            reverse(all(b));
            long long ans = 0;
            priority_queue<pair<long long, long long>> pq;
            long long t = 0;
            rep(i,1,m+1){
                if(b[i] > 0){
                    pq.push({b[i],i});
                }
                t+=b[i];
                while(t>0){
                    if(i==m){
                        break;
                    }
                    ans++;
                    t = t- 2*pq.top().first;
                    pq.pop();
                }
            }
            priority_queue<pair<long long, long long>> pq1;
            t = 0;
            rep(i,m+1,n+1){
                if(a[i]<0){
                    pq1.push({-a[i],i});
                }
                t+=a[i];
                while(t<0){
                    ans ++;
                    t += 2*pq1.top().first;
                    pq1.pop();
                }
            }

                cout<<ans<<en;
        }

    }
    return 0;
}