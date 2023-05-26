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
        long long  n,k;
        cin>>n>>k;

        string a,b;
        cin>>a>>b;
        map<char,long long>c1;
        for(int i=0;i<n;i++){
            c1[a[i]]++;
            c1[b[i]]--;
        }
        bool ok = true;
        for(char ch = 'a';ch<='z';ch++){
            if(c1[ch]!=0){
                ok = false;
                break;
            }
        }
        if(!ok){
            cout<<"NO"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]!=b[i] && i+k>=n && i-k<0){
                    ok=false;
                    break;
                }
            }
            if(!ok){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}