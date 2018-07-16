#include<iostream>
#include <algorithm>
using namespace std;

void wave_sort( int * arr , int n){

	
	sort(arr,arr+n);

	for(int i =0  ; i<=n-2 ; i+=2)
		swap(arr[i] ,arr[i+1]);



}



void display ( int * a , int n){

	for(int i = 0 ; i< n ; i++){

		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int t , n;
	int arr[1005];

	cin>>t ;
	while(t--){

		cin>>n ; 



		for(int i=0 ; i< n ; i++){
			cin>>arr[i];
		}

	

		wave_sort(arr, n);
	
		display(arr,n);


	} 



	return 0;
}
