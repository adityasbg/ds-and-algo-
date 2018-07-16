#include<iostream>

using namespace std;
# define ll long long int; 
TestCase 1
4,4

7,5,5,2

3,6,1,7

8,7,0,4

8,7,3,9
	
ll largest_no( int arr[][52] , int  m , int n){
	string no="";
	int    i , j ;
	k = n;
	int bl =0;
	int br = 0;
	int tl =0;
	int tr=0;
	int maxx=0;
	for( int i =m ; i>=0 ; i++){
		for( int j =tr ; j>=0 ; j++){
			maxx= max(maxx , arr[i][j]);

		}
	}

}

int main(int argc, char const *argv[])
{

int m , n;
int arr [55][55]={0};

cin>>m;
cin.ignore();
cin>>n;
for(int i =0 ; i< m ; i++){
	for( int j =0 ; j<n ; j++){
		cin>>arr[i][j];
		cin.ignore();
	}
}
	
}
