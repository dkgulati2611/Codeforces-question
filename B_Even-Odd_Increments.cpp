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
        long long n,q;
        cin>>n>>q;
        long long a[n];
        long long sum=0;
        long long esum=0;
        long long osum=0;
        long long ocnt=0;
        long long ecnt=0;
        for(int i=0;i<n;i++)
        {
             cin>>a[i];
             if(a[i]%2==0){
                 ecnt++;
                 esum+=a[i];
             }
             else {
                 ocnt++;
                 osum+=a[i];
             }
             sum+=a[i];
        }
 
        for(int i=0;i<q;i++)
        {
            long long x,y;
            cin>>x>>y;
            if(x==0)
            {
                sum+=y*ecnt;
                if(y%2==0)
                {
                    ecnt=ecnt; 
                }
                else{
                    ocnt=ocnt+ecnt;
                    ecnt=0;
                }
            }
            else
            {
                sum+=y*ocnt;
                if(y%2==0)
                {
                    ocnt=ocnt; 
                }
                else{
                    ecnt=ecnt+ocnt;
                    ocnt=0;
                }
                
            }
            cout<<sum<<endl;
        }
    }   
    return 0;
}