#include<iostream>
using namespace std;
#define ll long long 
// function calculate sum of subsets 
 ll count_sum(int temp , int *arr ){

     ll sum =0 ;
     int j =0 ;
    // j is pointer to get the index of particular index inarry to add
     while(temp){
        
            if(temp&1){
               sum +=arr[j];
                 
            }
               j++;
            ;
        
                         
            temp =temp>>1; 
                
        }
       
    return sum ;
 }

int  gen_subset(int *arr , int n){
    for(int i =1 ; i<(1<<n)-1;i++){
    int temp =i;
    ll sum = count_sum(temp , arr);
    // calculating sub set sum and checking if it is 0 if 0 return 1
        if(sum==0)
        return 1;
      
    }

    return 0 ;
}

int main(){
int t , n ;
int arr[100005];

cin>>t;

while(t--){

cin>>n;

for( int i =0 ; i< n ;i++){
    cin>>arr[i];
}

if(gen_subset(arr ,  n)){
    cout<<"yes";
}
else{
cout<<"no";
}

}
return 0;

}