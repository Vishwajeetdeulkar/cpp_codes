#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define endl '\n'

void solve(){
    int n,m;
    string nums;
    cin>>n>>m>>nums;

    int arr[10]={0};
    int b1[n]={0},b2[n]={0};

    for(int j=0;j<n;j++){
        int x=0,y=0;
        for(int h=0;h<=9;h++){
            if(arr[h]>=0){
                if(h>=(nums[j]-'0'))
                    b1[j]+=(h-(nums[j]-'0'))*arr[h];
                else
                    b2[j]+=(h-(nums[j]-'0'))*arr[h];
            }
        }
        arr[nums[j]-'0']++;
    }

    for(int j=0;j<m;j++){
        int x;
        cin>>x;
        x--;
        cout<<b1[x]-b2[x]<<endl;
    }

}
int main() {
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output1.txt", "w", stdout);
   
#endif
//	int testcases;
//	cin>>testcases;
	
//	while(testcases--){
	    solve();
//	}
	
	
	return 0;
}
