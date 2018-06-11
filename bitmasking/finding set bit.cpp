#include<iostream>
using namespace std;

int setbit_count(int a){
        int count =0 ;
       for( int i = a ; i > 0 ; i= i>>1 ) {
          
          count =count+ (i&1);
        }   
        return count;              
}



int main() {
  
  int q , a, b;
  cin>>q;

  
  while(q--){
    
      cin>>a;
      cin>>b;
      
     
      int count=0;
      int sum =0;
      
      
      for(int i = a ; i<=b ; i++){
         count =setbit_count(i);
        sum = sum +count ;
        
       
      }

      cout<<sum<<endl;
    
   
   
  }
  
  
	return 0;
}