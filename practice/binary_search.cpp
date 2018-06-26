#include<iostream>
#include<vector>
using namespace std;

bool bin_search_recur(vector <int> a ,int left , int right,int key){

	if(left<=right){

		int mid = (left+right)/2;
		if(a[mid]==key)
			return true;
		else if(a[mid]> key)
			return bin_search_recur(a,left,mid+1  , key);
		else
			return bin_search_recur(a,mid+1,right  , key);

	}
	return 0;
}

bool bin_search(vector <int> a , int key)
{
	int left =0;
	int right = a.size()-1;


	while(left<=right){

		int mid=(left+right)/2;

		if(a[mid]==key)
			return true;

		else if (a[mid]<key)
		
			left =mid+1;
		


		else
			right=mid-1;

		
		
}
return false;

}
int main(int argc, char const *argv[])
{
	
	vector <int> a ={1,2,3,4,5,6};
	int key =5;
	cout<<bin_search_recur(a,0,5,5);


	return 0;
}
