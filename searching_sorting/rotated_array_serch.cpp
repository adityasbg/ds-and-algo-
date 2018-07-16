#include<iostream>
using namespace std;

	int search(int * arr , int s , int e , int key){

		while(s<= e){

			int mid = (s+e)/2;


			if(arr[mid]==key){
				return (mid);
			}
			// mid lies in the   first line

			if(arr[s]<=arr[mid]){
				// first selecting which side  of the range mid lies 
				// then checking which side key lies  
				
				if(key>= arr[s] && key<=arr[mid] ){
					s = mid-1;
				}
				else
				{
					s=mid+1;

				}

			}

			// mid lies in  the second line


			 if(key>=arr[mid]  && key <= arr[e]){

			 	e = mid+1;

			 }
			 else{
			 	e=mid-1;
			 }




		}
		return -1;

	}


int main(int argc, char const *argv[])
{
	
	int arr[] ={5,6,7,1,2,3,4};

	int e = sizeof(arr)/sizeof(arr[0]);
	int s=0;
	cout<<search(arr , s , e-1 , 9);



	return 0;
}