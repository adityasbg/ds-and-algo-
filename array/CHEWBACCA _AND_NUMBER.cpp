#include<iostream>
#include<cstring>
using namespace std;
//https://hack.codingblocks.com/contests/c/101/62
int main(){

 char a[50];

 cin>>a;
int i =0;
if(a[i]=='9')
    i++;

for( ; a[i]!='\0' ; i++){
    int curr = a[i] -'0'; // convert char to int

    int sum= 9-curr;
    a[i]=min(curr,sum) +'0'; // convert int to char 

}
cout<<a;




return 0;
}