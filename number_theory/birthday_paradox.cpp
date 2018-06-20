#include<iostream>
using namespace std;

int birthday_paradox( float p){
    float result = 1.0;
    int i=0;
    while(1){
     i++;
    result*=(365-i)/365.0;
        if(1-result>=p){
            return i+1;
        }
    }
}

int main(){
    float p;
    cin>>p;
    cout<<birthday_paradox( p);
}
