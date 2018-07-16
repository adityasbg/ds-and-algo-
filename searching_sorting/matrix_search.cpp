#include <iostream>

using namespace std;

int  matrix_search( int arr[][30] , int key , int m , int n){
	int i , j ;

	for( i =0 ; i< n;){

		for( j = m-1 ; j>=0 ;){

			if(arr[i][j]==key){
				return 1;
			}

			if(arr[i][j]< key){
				i++;
				break;
			} 

			if(arr[i][j]> key){
				j--;
			}
		
		}
			
		if(j==-1 ){
			return 0;
		}
	}

return 0;

}


int main(){
int n ,m;

int key;

 cin>>n>>m ;
 int  arr[10][10];
 	cout<< n <<m ;
  for(int i =0 ;i < n ; i++){

  	for(int j =0  ; j < m ;j++){
  		cin>>arr[i][j];
  	}
  }
 
 cin>>key;

 cout<<matrix_search( arr , key , m , n)<<endl;

}