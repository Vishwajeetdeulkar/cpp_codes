#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(){
		data=0;
		next=NULL;
	}
	Node(int x){
		data=x;
		next=NULL;
	}
};
int main(){
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
    int nodes=0,n;
    cin>>nodes;Node* head=new Node();int x;
    Node* curr=head;
    for(int i=0;i<nodes;i++){
    	cin>>x;
    	curr->next= new Node(x);
    	curr=curr->next;
    }
    head=head->next;
    curr=head;
    while(curr){
    	cout<<curr->data<<" ";
    	curr=curr->next;
    }

    // Node *prev=NULL,*next=NULL;
    // curr=head;
    // while(curr){
    // 	next=curr->next;
    // 	curr->next=prev;
    // 	prev=curr;
    // 	curr=next;
    // }
    Node *p=nullptr,*q=nullptr,*s=head;
    while(s){
    	p=q;
    	q=s;
    	s=s->next;
    	q->next=p;
    }
    head=q;
    cout<<"\n";
    curr=head;
    while(curr){
    	cout<<curr->data<<" ";
    	curr=curr->next;
    }
	return 0;
}