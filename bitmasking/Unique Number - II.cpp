#include <iostream>

using namespace std;



void findUnique(int * a , int n ){
	int res =0;

	for(int i =0 ; i< n ; i++){
		res ^= a[i];
	}
	

	// FIND RIGHTMOST SET BIT
		int temp = res, i =0;
		while(temp>0){
			if(temp &1){
				break;
			}
			i++;
			temp=temp>>1;
		}

		int mask = (1<<i);
		int firstno =0;
		int secondno=0;
		
		
		for(int i = 0 ; i < n ; i++){
			if(a[i]&mask){
				firstno^=a[i];
			}
		
		}

		secondno= res^firstno;

		cout<<secondno<<" " << firstno;



}

int main(){
int n ;
int a[100005];
cin>>n;

for(int i =0 ;i<n ; i++){

	cin>>a[i];
}

findUnique(a ,n );



}