#include<iostream>

using namespace std;
int count_prime(bool *p , int a , int b){
        int count =0;
        for(int i =a ; i<b ; i++){
                count+=p[i];
            }  
            return count;
}

int prime_count( bool *p ,int a , int b ){


        int count =0;
        int n = max(a,b); // to select the upper bound for prime  pre computation 
    

    for(int i =2 ; i<n ; i++ ) 
    {
        p[i]=1;
      
    }
  
 
    for(int i =2 ;i< n ; i++ ){

                if(p[i]){

                    for(int j = 2*i ; j<= n ; j+=i){

                        p[j]=0;
                    }

                }


    }

    p[0]=0;
    p[1]=0;


    // calculating sum


    return count_prime(p , a,b);
}

int main(){

int n ;
int a , b ;

cin>>n ;
while(n--){
cin>>a;
cin>>b;
 bool p[1000000];   

 cout<<prime_count( p,a,b)<<" ";


}



}
