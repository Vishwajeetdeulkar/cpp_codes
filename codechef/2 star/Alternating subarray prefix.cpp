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
    vector<int> arr(n);int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr[i]=temp;
    }
    vector<int> ans(n);ans[n-1]=1;
    int count=1;
    for(int i=n-2;i>=0;i--){
        if(arr[i+1]/abs(arr[i+1]) == arr[i]/abs(arr[i])) count=1;
        else count++;
        ans[i]=count;
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<"\n";
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
