#include<iostream>

using namespace std;

 long subarray_sum(long *arr , int n){
     
   
     long maxx =0 ;
     for(int i =0 ; i< n ; i++){
         
         for(int j =i ; j<n ; j++ ){
               long curr=0;
             for(int k =i ; k<=j ; k++){
                 
                 curr +=arr[k];
              
             }
             if(curr>maxx)
                maxx=curr;

             

             
            
         }
     }
     return maxx;
     
 }


int main(){
    
    
    int t,n;
    long arr[100000];
    
    cin>>t;
    
    while(t--){

        cin>> n;
        
        for(int i =0 ; i<n ;i++){
            cin>>arr[i];
        }
        
        cout<<subarray_sum(arr,n)<<endl;
        
        
        
        
    }
    
    
    
    
}