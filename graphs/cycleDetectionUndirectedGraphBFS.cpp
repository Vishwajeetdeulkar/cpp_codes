#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
	bool checkForCycle(int node, int V,vector<int>& vis,vector<int> adj[]){
		queue<pair<int,int>> q;

		vis[node]=1;
		q.push({node,-1});

		while(!q.empty()){
			int node = q.front().first;
			int parent=q.front().second;
			q.pop();

			for(auto it: adj[node]){
				if(!vis[it]){
					vis[it]=1;
					q.push({it,node});
				}
				else if(parent!=it) return true;
			}
		}
		return false;
	}

public:
	bool isCycle(int V,vector<int> adj[]){
		vector<int> vis(V+1,0);
		for(int i=1;i<=V;i++){
			if(!vis[i]){
				if(checkForCycle(i,V,vis,adj))
					return true;
			}
		}
	}

};

int main(){
	int V=5;
	int E=5;

	vector <int> adj[V];

   adj[0].push_back(1);
   adj[1].push_back(0);

   adj[1].push_back(2);
   adj[2].push_back(1);

   adj[1].push_back(4);
   adj[4].push_back(1);

   adj[4].push_back(3);
   adj[3].push_back(4);

   adj[2].push_back(3);
   adj[3].push_back(2);

   Solution obj;
   bool ans = obj.isCycle(V,adj);

   if(ans) cout<<"cycle detected";
   else cout<<"cycle not detected";

	return 0;
}
