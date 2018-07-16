#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;
string s[100000];
static int  k;

bool compare( string a , string b){
return a< b;
}

void subsequence(char *in,char * out ,int i , int  j){

	
	if(in[i]=='\0'){
		out[j]='\0';
		if(strlen(out))
			s[k++]=out;

		return;
	}
	out[j]=in[i];
	subsequence(in, out, i+1 , j+1);
	subsequence(in , out , i+1,j);





}

int main(int argc, char const *argv[]){


	int n ;
	cin>>n;


	do{

	char in[50] ;
	char out[50] ="";

	cin>>in;

	
	
	
	subsequence(in, out , 0, 0);

	


	sort(s,s+k,compare);

for(int i =0 ; i< k ; i++){
		cout<<s[i]<<endl;
	}

}while(--n);


	return 0;
}