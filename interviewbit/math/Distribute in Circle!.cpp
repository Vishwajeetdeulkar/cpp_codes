#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define endl '\n'

int solve(int A,int B,int C){
	int n=(C+A-1)%B;
    if(n==0) return B;
    return n;
}

int main() {
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
	int testcases;
	cin>>testcases;
	
	while(testcases--){
		int a,b,c;
		cin>>a>>b>>c;
		cout<<solve(a,b,c)<<endl;
	}
	
	
	return 0;
}
