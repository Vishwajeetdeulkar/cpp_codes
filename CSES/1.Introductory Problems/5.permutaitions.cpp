#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define endl '\n'
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output1.txt", "w", stdout);
   
#endif
    ll n;
    cin>>n;
    vector<int> ans;
    int o=1,e=2;
    while(e<=n){
        ans.pb(e);e+=2;
    }
    while(o<=n){
        ans.pb(o);o+=2;
    }
    if(n<=3 && n!=1) cout<<"NO SOLUTION";
    else if(n==1) cout<<1;
    else{
        rep(i,ans.size()){
            cout<<ans[i]<<" ";
        }
    }
	
	
	return 0;
}
