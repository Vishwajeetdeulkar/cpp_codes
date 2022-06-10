#include<bits/stdc++.h>
using namespace std;

void printStack(stack<int> st){
	cout<<"stack : ";
		while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<"\n";
}

void insert(stack<int>& st,int temp){
	if(st.empty()) {st.push(temp);return;}
	int top=st.top();
	st.pop();
	insert(st,temp);
	st.push(top);
}

void reversestack(stack<int>& st){
	if(st.size()==2){
		int a=st.top();st.pop();
		int b=st.top();st.pop();
		st.push(a);
		st.push(b);
		return;
	}
	int temp=st.top();st.pop();
	reversestack(st);
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
	printStack(nums);
	if(nums.size()>1) reversestack(nums);
	printStack(nums);
	return 0;
}