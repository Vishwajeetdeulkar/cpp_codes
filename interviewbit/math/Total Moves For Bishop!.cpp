#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define endl '\n'

int solve(int A,int B){

	//Naive approach
	int count=0;
	//upper left
	int r=A,c=B;
	while(r>=1 && c>=1){
		count++;
		r--;
		c--;
	}
	//lower left
	r=A,c=B;
	while(r<=8 && c>=1){
		count++;
		r++;
		c--;
	}
	//upper right
	r=A,c=B;
	while(r>=1 && c<=8){
		count++;
		r--;
		c++;
	}
	//lower right
	r=A,c=B;
	while(r<=8 && c<=8){
		count++;
		r++;
		c++;
	}
	return count-4;

	//optimal approach
	return min(A-1,B-1)+min(A-1,8-B)+min(8-A,B-1)+min(8-A,8-B); 
}

int main() {
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
	int testcases=1;
	cin>>testcases;
	
	while(testcases--){
		int a,b;
		cin>>a>>b;
		cout<<solve(a,b)<<endl;
	}
	
	
	return 0;
}
