//Silent26Knight aka DKG
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define ll long long 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=1;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
int main()
{
    int t;cin>>t;
    while(t--){
        ll n;
        cin >> n;
		vector<ll> a(n,0);
		rep(i,0,n){
			cin >> a[i];
        }
		rep(i,1,n-1){
			if(a[i] < a[i - 1]){
				a[i + 1] += (a[i - 1] - a[i]);
                a[i] = a[i - 1];
			}
        }
		rrep(i,n-1){
			if(a[i] > a[i + 1]){
				a[i - 1] -= (a[i] - a[i + 1]);
                a[i] = a[i + 1];
			}
        }
		if(!is_sorted(all(a))){
			cout<<"NO"<<en;
        }
        else{
		    cout << "YES" << en;
        }
    }
    return 0;
}