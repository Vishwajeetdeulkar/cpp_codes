#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define endl '\n'

void solve(){
    vector<vector<int>> arr(3,vector<int>(3));
    ll total;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) cin>>arr[i][j];
    }
    total=0;
    for(int i=0;i<3;i++){
        ll temp=0;
        for(int j=0;j<3;j++) {
            temp+=arr[i][j];
        }
        if(total < temp){
            total = temp%2 ? temp : temp-1;
        } 
    }
    
    for(int i=0;i<3;i++){
        ll temp=0;
        for(int j=0;j<3;j++) {
            temp+=arr[j][i];
        }
        if(total < temp){
            total = temp%2 ? temp : temp-1;
        } 
    }
    cout<<total<<"\n";
    
}
int main() {
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
	int testcases;
	cin>>testcases;
	
	while(testcases--){
	   solve();
	}
	
	
	return 0;
}
