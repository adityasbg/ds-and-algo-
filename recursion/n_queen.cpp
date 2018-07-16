#include<iostream>
using namespace std;

bool is_safe(bool board[][10], int i,int j   ,int n){

		// checking for row

	for(int row = 0  ; row < n ;row++ ){

		if(board[row][j])
			return false;
	}

	// left diagonal

	int x = i ; 
	int y =j;

	while(x>=0  && y>= 0){
			if(board[x][y]==1)
			return false;
		x--;
		y--;

	}

	 x = i ; 
	 y =j;

	while(x>=0  && y< n){
			if(board[x][y])
			return false;
		x--;
		y++;

	}



return true;

}


bool  n_queen(bool board [][10] , int i , int n){

	if(i==n){

		for(int k =0 ; k< n ; k++){
			for( int p =0 ; p< n ;p++){
				if(board[k][p]==1){
					cout<<"Q";
				}
				else
					cout<<"-";
			}
			cout<<endl;
			
		}
		// to print all case return false in base case  so it can try new case 
		return true;
	}

		

	

// recursive case

	for( int j =0 ; j< n ; j++){

		if(is_safe(board, i ,j , n )){
			board[i][j]=1;

			// next part can rerturn true or false so we have to check if it retruned true or false 
			bool possible = n_queen(board,i+1, n);
			// if true means next part placement is allright 
			if(possible)
				return true ;

		}
		// if false  set placement  status to 0 
			board[i][j]=0;

	}



	return false ;



}

int main(){

bool board[10][10]={0};

int n ; 

cin>>n; 

n_queen(board, 0,n);


}