#include<iostream>
#include<algorithm>

using namespace std;

int main(){

	int t , n ;
	int a[100];
	cin>>t;
	while(t--){
		cin>>n;

		for(int i=0 ; i<n ; i++){
			cin>>a[i];
		}
		sort(a,a+n);
	


		if(n%2==0){
			int pos = n/2;
			cout<<(a[pos]+a[pos-1])/2<<endl;
		}else if(n%2!=0){
			int pos =n/2;
			cout<<a[pos]<<endl;
		}


	}



}