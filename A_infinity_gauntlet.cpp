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
    vector<pair<string,string>> mp = {{"purple","Power"}, {"green","Time"}, {"blue","Space"}, {"orange","Soul"},{"red","Reality"},{"yellow","Mind"}};
    
    int n;cin>>n;
    vector<string> v(n);
    rep(i,0,n){
        string s;
        cin>>s;
        v[i] = s;
    }
    if(n == 6){
        cout<<0<<en;
    }
    else{
        cout<<6-n<<en;
        for(auto it : mp){
            if(find(all(v),it.first) != v.end()){
                continue;
            }
            else{
                cout<<it.second<<en;
            }
        }
    }
    return 0;
}