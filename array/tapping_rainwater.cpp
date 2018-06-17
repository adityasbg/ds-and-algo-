#include<iostream>

using namespace std;
int tapping_rain_water(int *arr, int n){
    int left[1000]={0}; // pre compute left max
    int right[1000]={0}; // pre copmute right max
    int amount =0;
   
    // left max
    left[0]=arr[0];
    for(int i=1 ;i< n ; i++){
        left[i]=max(left[i-1], arr[i]);
       
    }
   
       
    // right max
    right[n-1]=arr[n-1];
    for(int i =n-2 ; i>=0 ; i--){
        right[i]= max(arr[i],right[i+1]);
       
    }
 
    //calculating amount of water tapped
    for(int i =0 ; i< n ; i++){
        amount+= min(left[i],right[i])-arr[i];
    }
    return amount;
}

int main(){

int n ;
int arr[1000];

cin>>n ;
for(int i =0 ; i< n ;i++){
    cin>>arr[i];
}


cout<<tapping_rain_water(arr, n)<<endl;
}