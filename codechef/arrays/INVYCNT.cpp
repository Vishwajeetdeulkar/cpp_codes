#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define endl '\n'

int countInversion(vector<int>& nums){
    int inc=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]>nums[j]) inc++;
        }
    }
    return inc;
}

ll solve(){
    ll n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    ll inc=countInversion(nums);
    ll ans=k*inc;
    
    for(int i=0;i<n;i++){
        int smaller=0;
        for(int j=0;j<n;j++){
            if(nums[j] < nums[i]) smaller++;
        }
        ans+= (k*(k-1)/2)*smaller;
    }
    cout<<ans<<endl;
}
int main() {
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output1.txt", "w", stdout);
   
#endif
	int testcases;
	cin>>testcases;
	
	while(testcases--){
	    solve();
	}
	
	
	return 0;
}
