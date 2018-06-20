#include<iostream>
using namespace std;
#define li long int
 li find_prime(bool *p , int n ){

     for(int i =2 ; i<=1000000 ;i++)
      p[i]=1;

     for(int i =2 ; i <=1000000 ;i++){

         if(p[i]){

            for(int j =2*i ; j<=1000000 ; j+=i ){
                p[j]=0;
            }
         }
     }
        p[0]=0;
        p[1]=0;
        li count=0;
        li flag =0;
        
        // calculating intregral value 
        for(int i=0 ; i<1000000; i++){
            
            count+=p[i];
         
            if(count==n){
                flag =i;
                
                break;
            } 
            
              
               
        }


     return (flag);
 }

int main(){
    int n ; 
    cin>>n;
    bool p[1000000];

   cout<<find_prime(p , n);


}