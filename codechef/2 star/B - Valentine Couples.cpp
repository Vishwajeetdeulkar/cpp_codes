#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    vector<int> boys(n),girls(n);
    for(int i=0;i<n;i++) cin>>boys[i];
    for(int i=0;i<n;i++) cin>>girls[i];
    
    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end(),greater<int>());
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
        if(maximum < boys[i]+girls[i]) maximum = boys[i]+girls[i]; 
    } 
    cout<<maximum<<"\n";
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
