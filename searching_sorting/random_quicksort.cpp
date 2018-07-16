#include<iostream>
#include <ctime>
using namespace std;
 
void shuffle(int *arr, int s , int e);
void  quick_sort( int *arr , int s , int e);
int partation ( int *arr , int s , int e);

 void shuffle(int *arr, int s , int e){

 	int i ;
 	int j ;
 	srand(time(NULL));

 	for(j = e ; j> 0 ; j--){

 		i = rand()%(j+1);

 		swap(arr[i],arr[j]);

 	}
 }


void quick_sort( int *arr , int s , int e){

		int p;
			if(s>=e){
				return ;
			}
			
				p = partation(arr , s  , e);
				quick_sort(arr ,s, p-1 );
				quick_sort(arr , p+1 , e);

			
} 


int partation ( int *arr , int s , int e){

		int i =s-1; 
		int j =s;
		int pivot=arr[e];

		for(; j<e ; j++){

			if(arr[j]<= pivot){
				i++;
				swap(arr[i] , arr[j]);
			}


		} 

		swap(arr[i+1] , arr[e]);

		return i+1;
} 




int main(){

int arr[100000]={0};


int n ;

cin>>n ; 

for(int i =0 ; i< n ; i++){
	cin>>arr[i];
}

shuffle(arr, 0 , n-1);

quick_sort(arr , 0 , n-1);


	for(int i =0 ; i< n ; i++){
		cout<<arr[i]<<" ";
	}


return 0;
}