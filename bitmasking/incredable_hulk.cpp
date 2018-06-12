#include<iostream>
using namespace std;

int  min_distance(int a){
  int count=0;
  while(a>0){
    count+=a&1;
    a=a>>1;
  }
  return count;
  
}


int main() {
  int n , a;
  cin>>n ;
  
  while(n--){
    
    cin>>a;
    
   cout<< min_distance(a) <<" ";
    
    
  }
	return 0;
}
