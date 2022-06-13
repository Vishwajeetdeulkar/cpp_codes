#include<bits/stdc++.h>
using namespace std;

void solve(string ip, string op){
	if(ip.length()==0){
		cout<<op<<" ";
		return;
	}
	char ch=tolower(ip[0]);
	char ch1=toupper(ip[0]);
	solve(ip.substr(1),op+ch);
	solve(ip.substr(1),op+ch1);
}
int main(){
	string ip="abc";
	string op="";
	solve(ip,op);
	return 0;
}