#include<iostream>
#include <cmath>
#define ll long long int 


// wrong 
using namespace std;
 ll kth_root(ll  n , ll k){

 ll x =log10(n)/k;

 	return exp(log(x));
 }

int main(int argc, char const *argv[])
{

ll t , n , k ; 
cin>>t;

while(t--){

cin>>n>>k;

cout<<kth_root(n , k)<<endl;


}

	return 0;
}
