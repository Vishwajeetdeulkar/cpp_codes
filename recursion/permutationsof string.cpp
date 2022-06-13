#include<bits/stdc++.h>
using namespace std;

void findpermutations(string str,int left,int right){
	if(left==right) {cout<<str<<"\n";return;}
	else{
		for(int i=left;i<=right;i++){
			//do
			swap(str[left],str[i]);
			//recur
			findpermutations(str,left+1,right);
			//undo i.e. backtrack
			swap(str[left],str[i]);

		}	
	}

}

int main(){
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output1.txt", "w", stdout);
   
#endif


	string str;
	cin>>str;

	findpermutations(str,0,str.length()-1);

	return 0;
}