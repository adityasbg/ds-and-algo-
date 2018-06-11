#include<iostream>
#include<cstring>
using namespace std;


void filter_str(char *s , int i ){

		int j =0 ;
		while(i>0){

			(i&1)?cout<<s[j]:cout<<" ";
			j++;

			i=i>>1;

		}  
		cout<<endl;
		



}



void  print_subtsr(char *s, int n  ){

	for(int i = 0 ; i<=(1<<n)-1 ; i++){

		filter_str(s , i);

	}
	

}

int main(){

int t;

cin>>t ; 

while(t--){
char s[100];
cin>>s;
int n= strlen(s); 


print_subtsr(s, n);




} 
      



}