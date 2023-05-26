//Silent26Knight aka DKG
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define ll long long 
#define pi (3.141592653589)
#define mod 1e9+7
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
bool isvalid(string s){
    int n = s.size();
    stack <char> st;
    bool ans = true;
    rep(i,0,n){
        if (s[i] == '{'|| s[i] == '(' || s[i] == '[' ){
            st.push(s[i]);
        }
        else if (s[i] == ')'){
            if (!st.empty()&&st.top() == '(')
            {
                st.pop();
            }
            else {
                ans = false;
                break;
            }
        }

    }
    if(!st.empty()){
        return false;
    }
    return ans;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        int cnt = 0;
        rep(i,0,n){
            if(s[i] == '('){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        if(cnt!=0){
            cout<<-1<<en;
            continue;
        }
        int a = 0, b = 0;
        rep(i,0,n){
            if(s[i] == '('){
                a++;
            }
            else{
                a--;
            }

            if(a<0){
                b++;
                break;
            }
        }
        a = 0;
        rep(i,0,n){
            if(s[i] == ')'){
                a++;
            }
            else{
                a--;
            }
            if(a<0){
                b++;
                break;
            }
        }
        if(b<2){
            cout<<1<<en;
            rep(i,0,n){
                cout<<1<<" ";
            }
            cout<<en;
        }
        else{
            vector<int> col(n);
            int l = 0,r = n-1;
            while(l<r){
                if(s[l] == ')' && s[r] == ')'){
                    col[l] = 2;
                    col[r] = 1;
                }
                else if(s[l] == '(' && s[r] == '('){
                    col[l] = 1;
                    col[r] = 2;
                }
                else if(s[l] == ')' && s[r] == '('){
                    col[r] = 2;
                    col[l] = 2;
                }
                else{
                    col[l]=1;
                    col[r]= 1;
                }
                l++;
                r--;
            }
            cout<<2<<en;
            rep(i,0,n){
                cout<<col[i]<<" ";
            }
            cout<<en;
        
        }
    }
    return 0;
}