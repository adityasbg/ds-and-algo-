#include<iostream>
#include<math.h>
using namespace std;

void boston_no(long n){

    int p_factor [1000]={0};
    long temp =n;
    // finding prime factor
    int j =0;
    for(long i=2 ; i*i<temp ;i++){
        if(temp%i==0){
            int count =0;
            while(temp%i==0){
            
                temp=temp/i;
                p_factor[j++]=i;
            }

        }
    }
    if(temp!=1){
        p_factor[j++]=temp;
    }

// count no of digit
temp =n;
int dig_count =0;
while(temp>0){
temp=temp/10;
dig_count++;
}


temp =n;

// extracrting digIT L-R
long s1 =0;
while(temp>0){
s1+=temp%10;
temp=temp/10;
}
long s2 =0;

for(int i =0 ; i< n ; i++){
s2+=p_factor[i];
}
if(s1 == s2){
    cout<<1;
}
else 
cout<<0;






}
int main(){
long n ; 
cin>>n;

boston_no(n);




}