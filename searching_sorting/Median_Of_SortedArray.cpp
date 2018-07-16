#include<iostream>
using namespace std;
int merge( int * arr , int *arr2 , int n){
	
	int i =0;         
	int j =0; 
	int k =0;
	int temp[10000]={0};

	while(i<n && j< n)
		{

		if(arr[i]<arr2[j]){
			temp[k]=arr[i]; 
			 k++;
			 i++;
			 
		}
		else{
			temp[k]=arr2[j];
				k++;
				j++;
				
		}
	
		}
		while(i<n ){
			temp[k]=arr[i]; 
			 k++;
			 i++;
		}
		while(j<n ){
			temp[k]=arr2[j];
				k++;
				j++;
		}
		

/*
	for( int i = 0 ; i < 2*n ; i++)
	{
		cout<<temp[i]<<" ";
	}
*/







return (temp[n-1]);



}

int main(){

int arr[1005]={0};
int arr2[1005]={0};

int n ;

cin>>n ; 


for (int i = 0; i < n; ++i)
{
	cin>>arr[i];
}

for (int i = 0; i < n; ++i)
{
	cin>>arr2[i];
}

cout<<merge(arr ,arr2 , n )<<endl;
	



}