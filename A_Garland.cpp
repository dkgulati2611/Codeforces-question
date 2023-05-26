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
        string s;cin>>s;
        map<char,int> mp;
        rep(i,0,s.length()){
            mp[s[i]]++;
        }
        bool flag = true;
        int ans = s.length();

        if(mp.size() == 4 || mp.size() == 3){
            cout<<4<<en;
        }
        else if (mp.size() == 1){
            cout<<-1<<en;
        }
        else{
            bool flag = true;
            for(auto it : mp){
                if(it.second == 3){
                    flag = false;
                }
            }
            if(flag){
                cout<<4<<en;
            }
            else{
                cout<<6<<en;
            }
        }
    }
    return 0;
}