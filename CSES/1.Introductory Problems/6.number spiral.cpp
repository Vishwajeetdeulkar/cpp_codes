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
  		ll y,x;
  		cin>>y>>x;
  		if(x>y){
  			if((x&1) ==1) cout<<x*x-y+1<<endl;
  			else{
  				--x;
  				cout<<x*x +y<<endl;
  			}
  		}
  		else{
  			if((y&1) == 0) cout<<y*y -x+1<<endl;
  			else{
  				--y;
  				cout<<y*y +x<<endl;
  			}

  		}
  	}

	return 0;
}