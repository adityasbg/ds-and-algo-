#include<iostream>

using namespace std;

void recur_bubble_sort(int *a , int j , int n){

	if(n==1)
		return;

	if(j==n){
		return recur_bubble_sort(a, 0 , n-1);
	}

	if(a[j]>a[j+1])
		swap(a[j],a[j+1]);

	recur_bubble_sort(a,j+1 , n);
	return ;

}

void print(int * a , int n){

	for(int i =0 ; i<n ; i++)
		cout<<a[i]<<" ";

}
void bubble(int *a, int n){

	for(int i =0 ; i< n ; i++){

		for( int j =0 ; j<n-i-1 ; j++)
				if(a[j]>a[j+1])
					swap(a[j],a[j+1]);
	}


}

int main(int argc, char const *argv[])
{`

		int arr[] ={6,2,3,4,5};
		int n= sizeof(arr)/sizeof(arr[0]);

		recur_bubble_sort(arr, 0,n);
		print(arr,n);
		cout<<endl;

		bubble(arr,n);
		print(arr,n);


	return 0;
}