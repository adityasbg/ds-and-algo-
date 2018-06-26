#include<iostream>
using namespace std;

void  sum_pair(int *a, int n , int x){

	for (int l = 0 ;l < n; l++)
		{
			int sum =0;
			for(int r =l+1 ; r<n ; r++){
				
				sum =a[l]+a[r];
				if(sum==x)
				{
					
					cout<<"Yes"<<endl;
					return;
				}
			}

		}
		cout<<"No"<<endl;
}



int main(int argc, char const *argv[])
{
	
	int a[1005]={0};
	int n ,t ,x ;
	cin>>t;
	while(t--){

		cin>>n>>x;

	

		for(int i =0 ;i<n ;i++){
			cin>>a[i];
		}
				
		sum_pair(a, n , x);
	
		


	}



	return 0;
}