#include <iostream>
using namespace std;
//https://hack.codingblocks.com/practice/p/369/1259
    int kadane_algo(int a[] , int n){
        int cs=a[0];
        int ms =a[0] ;
        for(int i =1 ; i< n ; i++){
            cs=max(a[i],cs+a[i]);
           
            ms=max(cs,ms);
        }
        
        return ms;
    }

int main() {
    
    int t ,n; 
    int a[100000];
    cin>>t;

    while(t--){
        
        cin>>n;
        
        for(int i =0 ; i< n ;i++){
            cin>>a[i];
        }
    
        cout<<kadane_algo(a,n)<<endl;;
        
    }
	
	return 0;
}