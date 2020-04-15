#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	int t;
	cin>>t;
	while(t--){
		vector<string> sudoku;
		for(int i=0;i<9;i++){
			string temp;
			cin>>temp;
			sudoku.push_back(temp);
		}
		sudoku[0][0] = sudoku[0][1];
		sudoku[1][3] = sudoku[1][4];
		sudoku[2][6] = sudoku[2][7];
		sudoku[3][1] = sudoku[3][2];
		sudoku[4][4] = sudoku[4][5];
		sudoku[5][7] = sudoku[5][8];
		sudoku[6][2] = sudoku[6][0];
		sudoku[7][5] = sudoku[7][3];
		sudoku[8][8] = sudoku[8][6];
		for(int i=0;i<9;i++){
			cout<<sudoku[i]<<endl;
		}
	}
}