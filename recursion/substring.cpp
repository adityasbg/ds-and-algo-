#include<iostream>
using namespace std;

void substring(string input, string output){

	if(input.length()==0){
		cout<<output<<", ";
		return;
	}

	substring(input.substr(1),output);
	substring(input.substr(1),output+input[0]);

}

int main(){

string input;
string output;

getline(cin,input);

substring(input,output);

}