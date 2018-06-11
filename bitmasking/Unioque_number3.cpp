#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

void moding(int *a);
void Unique3(int *arr, int n ,int *a);



void moding(int *a){
    int p =1;
    int ans  =0;

        for(int i =0 ; i< 32 ; i++){
        a[i]%=3;
       ans+=a[i]*p;
       p=p<<1; 
    }
    cout<<ans;
}

void Unique3(int *arr, int n ,int *a){

for(int j =0 ; j<n ; j++){
    int i=0 ; 
    int no = arr[j];
    while(no>0){

       a[i] +=  (no&1);
       i++;
       no = no>>1;

    }
}

// moding by 3

moding(a);



}


int  main(){
int arr[100000];
int a[64];
int n;
cin>>n;

memset(a,0, sizeof(a)*64);

for(int i =0 ; i< n ; i++)
{
    cin>>arr[i];
}

// incrementing bit postion value  
Unique3( arr, n ,a);




return 0;
}