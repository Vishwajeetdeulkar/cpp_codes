#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
		ios::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif

  	int testcases=0;
  	cin>>testcases;
  	while(testcases--){
  		int n,k;
  		cin>>n>>k;
  		vector<int> prices;
  		int x;
  		for(int i=0;i<n;i++) {
  			cin>>x;
  			prices.push_back(x);
  		}
  		
  		vector<int> ans(n,-1);
  		for(int i=0;i<n;i++){
  			int check=prices[i];
  			int id=upper_bound(prices.begin()+i+k,prices.end(),check)-prices.begin();
  			ans[i]=id+1;
  		}
  		  	for(int i=0;i<n;i++) {
  			cout<<ans[i]<<" ";
  		}
  	}


	return 0;
}