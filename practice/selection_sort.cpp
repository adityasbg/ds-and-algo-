#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
void swap(int & a , int & b){
	int temp;
	temp =a ;
	a=b;
	b=temp;
}
*/
void selection(vector<int> a){
	int min_index=0;
	int n = a.size();
	

	for(int i =0 ; i<n ;i++){
			min_index=i;
		

			for(int j =i+1 ; j<n ; j++ ){
				if(a[j]< a[min_index]){
					min_index=j;
					
				}
			}
			swap(a[i],a[min_index]);
	}

}
int main (){

vector<int> a={51,6,0,4,7};


selection(a);
cout<<"\n";

for(int i = 0 ; i< 5 ;i++ ){
	cout<<a[i];
}



}

