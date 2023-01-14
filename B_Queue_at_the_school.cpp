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
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        for(int i = 0;i<s.length()-1;i++){
            if(s[i] =='B' && s[i+1] == 'G'){
                swap(s[i],s[i+1]);
                i++;
            }
            else{
                continue;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}