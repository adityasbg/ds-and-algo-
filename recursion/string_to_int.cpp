#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;

int stoi(string a , int n){
	int x;
	int size= a.length();
		if(size==n)
			return 0;
	
	 x=(a[n]-'0')*pow(10,size-n-1);
	 	
		return x+stoi(a ,n+1);

}

int main(){
// get string 1368126 and counvert it to integer using recursion  
string a ;
getline(cin,a);	
cout<<stoi(a, 0);
}