#include<iostream>
using namespace std;
char keypad[][10]={"" ,"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void phone_keypad(char * in , char * op , int i , int j){

	if(in[i]=='\0'){
		cout<<op<<",";
		return;
	}
	int digit =in[i]-'0';

		if(digit==0|| digit==1){
			phone_keypad(in , op ,i+1, j);
		}

	for(int k =0 ; keypad[digit][k]!='\0';k++){
		op[j]=keypad[digit][k];
		phone_keypad(in , op ,i+1 , j+1);
	}


}
int main(){

char in[100];
char op[100];
cin.getline(in,100);

phone_keypad(in , op , 0 , 0);

}