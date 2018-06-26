#include<iostream>
using namespace std;
int bin_search(int *a ,int l ,int r , int key){


		if(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==key){
			return mid;
		}

		
		if(a[mid]<key)
			return bin_search(a,mid+1,r,key);

		else if(a[mid]>key)
			return bin_search(a,l,mid-1,key);

		
	}
	return -1;


}

int main(){

int arr[]={1,2,6,9,78,90};
int n = sizeof(arr)/sizeof(arr[0]);
int key;
cin>>key;
cout<<bin_search(arr,0,n-1,key);


}
