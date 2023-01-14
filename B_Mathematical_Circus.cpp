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
        long long k;
        cin>>n>>k;
        // vector<int> a;
        
        vector<pair<int,int>> ans;
        bool aa = 1;
        if(k%4 == 0){
            cout<<"No"<<en;
        }
        else{
            rep(i,1,n){
                if((i+1)%4 == 0){
                    ans.push_back({i,i+1});
                    i++;
                }
                else if(i%4 == 0){
                    ans.push_back({i+1,i});
                    i++;
                }
                else if((i+k)%4 == 0){
                    ans.push_back({i,i+1});
                    i++;
                }
                else if((i+1+k)%4 == 0){
                    ans.push_back({i+1,i});
                    i++;
                }
                else if(i%2 == 0 && (i+1+k)%2 == 0){
                    ans.push_back({i+1,i});
                    i++;
                }
                else if((i+1)%2 == 0 && (i+k)%2 == 0){
                    ans.push_back({i,i+1});
                    i++;
                }
                else{
                    aa = 0;
                }
            }
            if(aa && ans.size()>=n/2){
                cout<<"Yes"<<en;
                for(auto it : ans){
                    cout<<it.first <<" "<<it.second<<en;
                }
            }
            else{
                cout<<"No"<<en;
            }
        }

    }
    return 0;
}