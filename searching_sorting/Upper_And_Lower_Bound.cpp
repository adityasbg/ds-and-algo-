#include<iostream>

using namespace std;

 int bsearchlow(int *arr , int l , int up  , int key ){
int ans =-1 ;
 	while(up>=l){

 		int mid = (l+up)/2;


 		if(arr[mid]== key){
 			ans= mid;
 			up=mid-1;
 		}

 		if(arr[mid]<key){
 			l=mid+1;
 		}
 		else if(arr[mid]>key)
 			up=mid-1;
 	}


	return ans;



 }


 int bsearchhigh(int *arr , int l , int up  , int key ){
int ans =-1;
 	while(up>=l){

 		int mid = (l+up)/2;


 		if(arr[mid]== key){
 			ans= mid;
 			l=mid+1;
 		}

 		if(arr[mid]<key){
 			l=mid+1;
 		}
 		else if(arr[mid]>key)
 			up=mid-1;

 	}

	return ans;


 }


int main(int argc, char const *argv[])
{


int n ;
int t ;

cin>> n;

int arr [1005]={0};
for(int i =0 ; i< n ; i++){

	cin>>arr[i];
}

cin>> t;
while(t--){


	int x;

	cin>>x;
	cout<<bsearchlow(arr ,  0 ,  n  , x )<<endl;
	cout<<bsearchhigh(arr , 0 ,  n  ,x )<<endl;

		
}




	return 0;
}