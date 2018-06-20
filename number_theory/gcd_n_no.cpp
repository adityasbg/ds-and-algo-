
#include<iostream>
#define ll int
using namespace std;

ll gcd (ll a , ll b ){

    if(b==0){
        return a; 
    }
    else
    return gcd(b,a%b);
}


int main(){

int n;
int a[50];
cin>>n;
for(int i =0 ;i<n ;i++){
cin>>a[i];

}
int result =a[0];
for(int i =1 ; i<n ;i++)
{
    result= gcd(result ,a[i]);
}
cout<< result;


}









