#include<bits/stdc++.h>
using namespace std;

void insert(stack<int>& st,int temp){
	if(st.size()==0 || st.top()<=temp){
		st.push(temp);
		return;
	}
	int val=st.top();
	st.pop();
	insert(st,temp);
	st.push(val);
}
void sort(stack<int>& st){
	if(st.size()==1) return;
	int temp=st.top();
	st.pop();
	sort(st);
	insert(st,temp);
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

	sort(nums);
	while(!nums.empty()){
		cout<<nums.top()<<" ";
		nums.pop();
	}
	return 0;
}