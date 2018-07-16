#include<iostream>
#include<cstring>

using namespace std;

//4,5,7
//5,49,10,27
static int count =0;
void subsetSums(int arr[], int l, int r, int pro ,int sum=1)
{
    // Print current subset
    if (l > r)
    {
       	if(sum%pro == 0){
       		count++;
       	}
        return;
    }
 
    // Subset including arr[l]
    subsetSums(arr, l+1, r, pro , sum*arr[l]);
 
    // Subset excluding arr[l]
    subsetSums(arr, l+1, r,pro  ,sum);
}



	

int main(int argc, char const *argv[])
{

	int n , p , q;
	int in[500];
	char comma;
	cin>> n;
	cin.ignore();
	cin>>p ;
	cin.ignore();
	cin>> q;

	for( int i =0 ; i<n  ; i++){
		cin>>in[i];
		cin.ignore();
	}
	
	int pro = p*q;
	subsetSums(in,  0, n-1  , pro );
	cout<<count<<endl;

	return 0;
}
//4,11,13

//3,7,12,13