#include <iostream>

using namespace std;

	void toh(int n , char a , char b , char c){

		if(n>0){
			toh(n-1,a,c,b);
			cout<<" moving "<<n <<" disk  from " <<a<<" to "<<c<<endl;
			toh(n-1,b,a,c); 

		}
	}


int main(int argc, char const *argv[])
{
	
	int n ;
	cin>>n;
	toh(n,'a','b','c');


	return 0;
}