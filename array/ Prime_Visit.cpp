#include<iostream>
using namespace std;


int prime(int n){


for(int i=2 ; i*i<=n ; i++){
    if(n%i==0){
        return 0 ;
    }

}

    return n<2 ? 0 : 1 ;
}





int prime_count(int a, int b){

int count =0;

    for(int i =a ; i<=b ; i++){

    count+=prime( i);



    }
    return count;


}







int main(){

int n ;
int a , b ;

cin>>n ;
while(n--){
cin>>a>>b;

    cout <<prime_count(a,b)<<" ";

}



}
