#include <iostream>
#include<cstring>
using namespace std;
void rotate( char * a, int k){
	int i = strlen(a);
//shifting from last index
	while(i>=0){
		a[k+i]=a[i];
		i--;
	}

	i = strlen(a);
	int s=0;
	for(int j = i-k ; j < i ; j++){
		a[s]=a[j];
		s++;
		j++;
	}
	a[i-k]='\0';
	cout<<a;


}

int main(){
int k ;
char a[100];

 cin.getline(a,100);
cin>>k;
rotate(a,k);


}

