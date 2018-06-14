#include<iostream>

using namespace std;
int main(){

int c1, c2 , c3 , c4 , m,n;
int t ; 

cin>>t; 
while(t--){
cin>>c1>>c2>>c3>>c4;

cin>>n>>m ; 
int cab[1005];
int rick[1005] ;

for(int i =0 ; i< n ;i++){
cin>>rick[i];
}

for(int i =0 ; i< n ;i++){
cin>>cab[i];
}
int rick_cost=0;
for(int i =0 ; i< n ; i++){
rick_cost=min(c1*rick[i],c2);

}
rick_cost=min(rick_cost,c3);
int cab_cost=0;
for(int i =0 ; i< n ; i++){
cab_cost=min(c1*cab[i],c2);

}
cab_cost=min(cab_cost,c3);
int final = min(c4,cab_cost+rick_cost);

cout<<final<<endl;


}











}