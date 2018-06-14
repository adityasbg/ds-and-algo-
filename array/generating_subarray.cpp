#include<iostream>
using namespace std;
int main(){

int a[]={1,2,3,4};
int n = (sizeof(a)/sizeof(a[0]));
for(int i =0 ; i< n ;i++){

    for(int j =0 ; j< n ;j++){

        for(int k = i ; k<=j ; k++){
            cout<<a[k];
        }
        cout<<endl;

    }
}




}