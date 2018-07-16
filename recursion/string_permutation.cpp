#include <iostream>
using namespace std;


void permute (char * input , int i){

		if(input[i]=='\0'){
			cout<<input<<" , ";
			return;
		}

		for(int j = i ; input[j]!='\0'; j++){
			swap(input[i], input[j]);

			permute(input,i+1);

			swap(input[i], input[j]);
		}


}

int main(int argc, char const *argv[])
{

 char input[100];
 cin.getline(input,100);

 permute(input, 0); 
	return 0;
}
                                       