#include<iostream>
#include <ctime>
#include <cstdio>
using namespace std;


 void shuffle(int *arr, int s , int e){

 	int i ;
 	int j ;
 	srand(time(NULL));

 	for(j = e ; j> 0 ; j--){

 		i = rand()%(j+1);

 		swap(arr[i],arr[j]);

 	}
 }


int partition( int *arr , int s, int e){

	int pivot = arr[e];
	int i=s-1;
	int j = s;
	for(; j<e; j++){
		if(arr[j]<=pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[e]);

	return i+1;


}


void quick_sort(int * arr , int s , int e){

	if(s>= e){
		return;
	}
	int p = partition(arr , s , e);

	quick_sort(arr,s,p-1);
	quick_sort(arr,p+1, e);

}


void print(int * arr , int end){
for(int i =0 ; i< end; i++){
	cout<<arr[i]<<" ";
}
cout<<endl;

}
int main(){

int arr[]={5,69,54,8,23,3,51,81,0};

int n = sizeof(arr)/sizeof(arr[0]);

shuffle(arr, 0 , n-1);// shuffing to make worst case to n log n 

print(arr,n);

 quick_sort(arr , 0 , n-1);

print(arr,n);
}