#include<bits/stdc++.h>
using namespace std;
void findMid(stack<int>& st, int k){
	if(k==1) {st.pop();return;}
	int temp=st.top();st.pop();
	findMid(st,k-1);
	st.push(temp);

}
int main(){
	stack<int> nums;
	nums.push(11);
	nums.push(5);
	nums.push(6);
	nums.push(2);
	nums.push(1);
	nums.push(999);
	nums.push(322);
	nums.push(133);
	if(nums.empty()) return 0;
	int mid = nums.size()/2+1;
	
	findMid(nums,mid);
	
	while(!nums.empty()){
		cout<<nums.top()<<" ";
		nums.pop();
	}
	return 0;
}