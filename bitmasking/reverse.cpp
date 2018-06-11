#include <iostream>
using namespace std;
int main() {
    long int n ;
    cin>>n;
long int  sum =0;
long int temp;

    while(n > 0){
        
         temp = n %10;
   
        sum= sum *10 +temp ;
        
          n = n/10;
        
    }
    
  cout<<sum;

}
