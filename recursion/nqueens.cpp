#include<bits/stdc++.h>
using namespace std;

bool isItSafeToPlace(vector<vector<int>>& board,int row,int col){

	//vertically
	int r=row-1;
	int c=col;
	while(r>=0){
		if(board[r][c]==1) return false;
		r--;
	}

	//horizontally left
	r=row;
	c=col-1;
	while(c>=0){
		if(board[r][c]==1) return false;
		c--;
	}

	//diagonal left
	r=row-1;
	c=col-1;

	while(c>=0 && r>=0){
		if(board[r][c]==1) return false;
		c--;r--;
	}

	//diagonal right
	r=row-1;
	c=col+1;

	while(c<board[0].size() && r>=0){
		if(board[r][c]==1) return false;
		c++;r--;
	}

	return true;

}
void nqueen(vector<vector<int>>& board,int row,int col,int tq,int qpsf,string ans){

	if(qpsf==tq) {cout<<ans<<"\n";return;}

	if(col==board[0].size()) {row++;col=0;}

	if(row==board.size()) return;

	//place
	if(isItSafeToPlace(board,row,col)){
		//do
		board[row][col]=1;
		//recur
		nqueen(board,row,col+1,tq,qpsf+1,
			ans + "[" + to_string(row) + "-"+ to_string(col) + "]");
		//undo
		board[row][col]=0;

	}

	//not placed
	nqueen(board,row,col+1,tq,qpsf,ans);
}

int main(){
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif

    vector<vector<int>> board(4,vector<int>(4,0));
    //matrix,ro,col,total queens,currentlyplaced queens,ans
    nqueen(board,0,0,4,0,"");

	return 0;
}