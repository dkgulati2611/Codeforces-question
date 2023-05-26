//Silent26Knight aka DKG
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, c1, c2, f, i, ans, b1, b2;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        ll b[n];
        
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        
        c1=c2=0;
        ans=0;
        
        for(i=0; i<n; i++)
        {
            if(b[i]==2){
                c1=c1+c2;
                
                if(c1>0)
                ans=max(ans, (c1+2)/2);
                
                c2=0;
            }else{
                c2++;
                if(c1==0)
                ans=max(ans, c2);
                else
                ans=max(ans, (c1+2)/2+c2);
            }
        }
        
        
        cout<<ans<<"\n";
        
    }
    
}

