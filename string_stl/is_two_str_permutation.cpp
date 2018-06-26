#include<iostream>
#include<cstring>
using namespace std;

bool is_permutation(char *a , char *b ){
		int freq[27]={0};
		// lenght of string must be same for permutation to be same 
			if(strlen(a)!=strlen(b))
				return 0;

			// calculation frequency of character in string a
		for(int i =0 ; i<strlen(a) ; i++){
			freq[a[i]-'a']++;
		}
			
			// those char whose freq match is subtacted if after sub freq is same it mean
			// they have same frequency 
			for(int i =0 ; i<strlen(b) ; i++){
			freq[b[i]-'a']--;
			}

			for(int i =0 ;i< 26 ;i++){
				if(freq[i]!=0){
					return false;
				}
			}

		return true;
}

int main(){

char a[100]="aabdd";
char b[100]="aabdd";
cout<<is_permutation(a , b );


}
