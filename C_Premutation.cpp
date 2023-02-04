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
        vector<vector<int>>v(n,vector<int>(n-1));
        rep(i,0,n){
            rep(j,0,n-1){
                cin>>v[i][j];
            }
        }
        map<int,int> M;
        int k, ind;
 
        rep(i,0,n){
            M[v[i][0]]++;
            if(M[v[i][0]] == 2){
                k = v[i][0];
                break;
            }
        }
 
        rep(i,0,n){
            if(v[i][0] != k){
                ind = i;
                break;
            }
        }
 
        cout << k << " ";
 
        for(auto value : v[ind]){
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}