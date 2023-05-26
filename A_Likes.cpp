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
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        int countp = 0,countn = 0,count = 0;
        rep(i,0,n){
            cin>>a[i];
            if(a[i] >=0){
                countp++;
            }
            else{
                countn++;
            }
        }
        // cout<<countp<<" "<<countn<<en;
        // vector<int> mx;
        while(count < countp){
            count++;
            cout<<(count)<<" ";
        }
        int temp = countn;
        while(temp--){
            count--;
            cout<<count<<" ";
        }
        cout<<en;
        vector<int> mn;
        bool k = true;
        count = 0;
        while(countp > 0 && countn > 0){
            if(k){
                count++;
                k = false;
                // mn.push_back(count);
                cout<<count<<" ";
                countp--;
            }
            else{
                count--;
                k = true;
                // mn.push_back(count);
                cout<<count<<" ";
                countn--;
            }
        }
        while(countp>0){
            count++;
            // mn.push_back(count);
            cout<<count<<" ";
            countp--;
        }
        while(countn>0){
            count--;
            // mn.push_back(count);
            cout<<count<<" ";
            countn--;
        }cout<<en;
        // rep(i,0,mx.size()){
        //     cout<<mx[i]<<" ";
        // }
        // rep(i,0,mn.size()){
        //     cout<<mn[i]<<" ";
        // }
    }
    return 0;
}