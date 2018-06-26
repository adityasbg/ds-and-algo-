#include<iostream>

using namespace std;
void merge( int *a , int s,int e){

	int mid =(s+e)/2;
	int i=s;
	int j =mid+1;
	int k =s;
	int temp[100];

	while(i<=mid &&  j<=e ){

		if(a[i]<a[j]){
			temp[k++]=a[i++];
		}
		else
		{
			temp[k++]=a[j++];
		}
	}

	while(i<=mid){
		temp[k++]=a[i++];
	}
	while(j<=e){
		temp[k++]=a[j++];
	}

	// copying temp array in original array
	for(int i =s ; i<=e ; i++){
		a[i]=temp[i];
	}




}

void merge_sort(int *a , int s , int e){

	if(s<e)
		{
	int mid = (s+e)/2;
	merge_sort(a,s,mid);
	merge_sort(a,mid+1,e);
	merge(a,s,e);
	}
return;
}

int main(){

int a[]={7,8,9,1,2,61,23};

int n = sizeof(a)/sizeof(a[0]);

merge_sort(a,0,n-1);

for(int i =0 ; i<n ; i++){
		cout<<a[i]<<" ";
	}

}