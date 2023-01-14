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
    long long n;cin>>n;
    int count = 0;
    while(n>0){
        int a = n%10;
        if(a == 4 || a==7){
            count++;
        }
        n/=10;
    }
    bool ans = false;
    while(count > 0){
        int b = count%10;
        if(b!=4 && b!= 7){
            ans = false;
            break;
        }
        else{
            ans = true;
        }
        count/=10;
    }
    if(ans){
        cout<<"YES"<<en;
    }
    else{
        cout<<"NO"<<en;
    }
    return 0;
}