#include<iostream>
#include<bits/stdc++.h>
#include<queue>
#define ll long long int
using namespace std;

class node
{
public:
	int data;
	node * left ; 
	node * right;

	node(int d ){
		data= d;
		left=NULL;
		right=NULL;
	}
	
	
	};

 node * insert( node *  root , int data ){

 	if(root==NULL){
 	root = new node(data);
 		return root;
 	}

 	if( data < root->data ){
 			root->left = insert(root->left , data);
 		}
 		else{
 			
 			root->right= insert(root->right , data);
 		}

 	return root;
 }
void  takeInput( node * & root ){
 	int data ;
 	cin>>data;
 	while(data != -1){
 		root = insert(root, data);
 		cin>>data;
 	}
 	
 }
  // pre order

 void preorder(node * root){
 	if(root==NULL){
 		return;
 	}
 	cout<<root->data<<"--";
 	preorder(root->left);
 	preorder(root->right);

 }
// LEVEL ORDER PRINT

 void level_order_print(node * root){
 	queue<node *> q;

 	if(root==NULL){
 		
 		return;
 	}

 	q.push(root);
 	q.push(NULL);

 	while(!q.empty()){
 		
 		node * current =q.front();
 		if(current==NULL){
 			cout<<endl;
 			q.pop();
 			if(!q.empty()){
				q.push(NULL);
			}

 		}
 		else{
 			q.pop();
		 	cout<<current->data<<" ";
		 	
		 		if(current->left)	
					q.push(current->left);

				if (current->right)	
					q.push(current->right);

 			}
 	}
 }

 int height(node * root){

 		if(root==NULL)
 			return 0;

 		return max(height(root->left), height(root->right)) +1;



 }

 bool isbalanced(node * root){
 	if(root == NULL)
 		return false;
 	int h1 = height(root->left);
 	int h2 = height(root->right);
 	h1= abs(h1 -h2);

 	return (h1>=1 )? false :true;
 }

 class mypair
 {
 public:
 	int height;
 	bool isbalancedd;

 	
 };

 mypair isbalanced_fast(node * root){
 	mypair p;

 	if(root == NULL){
 		p.height=0;
 		p.isbalancedd = true;
 		return p;
 	}
 	mypair leftsubtree =isbalanced_fast(root->right);
 	mypair rightsubtree =isbalanced_fast(root->left);

 	int diff = abs(leftsubtree.height - rightsubtree.height);

 	if(diff<= 1 && leftsubtree.isbalancedd == true  && rightsubtree.isbalancedd == true){
 		p.isbalancedd = true;
 	}
 	else
 		p.isbalancedd = false;
 	p.height = max(leftsubtree.height , rightsubtree.height)+1;


 	return p ;

 	
 }

 // how many bst are possible for n number of node  catalan number number(1......n)
 int binomial_coef( int n , int k){
 	int c[n+1] ={0};
 	c[0]=1; // nc0 =1

 	for( int i =0 ; i<= n ; i++){
 		for( int j=min(i,k) ; j > 0 ; j--){
 			c[j]=c[j]+c[j-1];
 		}
 	}

 	return c[k];
 }

 int no_of_bst_posible(int n){


 	return binomial_coef(2*n ,n)/(n+1);
 }

node * min_element( node * root){

	while(root->left!=NULL){
		root=root->left;
	}

	return root;
}


node * delete_bst( node * root , int  key){

		if(root ==NULL)
			return NULL;

		if(root->data ==key){
			// 0 child 

			if(root->left ==NULL && root->right==NULL){
				delete root;
				return NULL;
			}

			// 1 child 
			if(root->left==NULL && root->right!=NULL){
				node *temp = root->right;

				delete root;
				return temp;

			}

			if(root->right==NULL && root->left!=NULL){
				
				node * temp = root->left;
				delete root;


				return temp;

			}
			// dont forget to return root after every delete operation  
			// 2 child
			// find miminum in rightsubtree
			
			node * replacement =min_element(root->right);
			root->data = replacement->data;
			// after finding replacement  element from the tree 
			root->right =delete_bst(root->right , replacement->data);
			return root;


		}
		else if( root->data > key){
			root->left=delete_bst(root->left , key);
			return  root;
		}
		else{
			root->right = delete_bst(root->right , key);
			return root;
		}



} 
 
// create a balanced bst of sorted array

 node *  arraytobst(int *arr , int s  , int e ){

     if(s>e)
     return NULL;

 			int mid = (s+e)/2;
 			node * root = new node(arr[mid]);
 	
      root->left =arraytobst(arr , s , mid-1);
         root->right =arraytobst(arr , mid+1 , e);


 		

   
         return root;


 }

 // tree is bst or not 

 bool isbst (node * root , int minV = INT_MIN , int maxV= INT_MAX){

 		if(root == NULL)
 			return true;

 	if(root->data >= minV && root->data <=maxV  &&  isbst(root->left , minV ,root->data ) && isbst(root->right , root->data , maxV))
	return true ;



	return false; 	 



 }
//tree to sorted linklist 

class Linklist{
public:
	node * head;
	node * tail;
};


Linklist bst_to_Linklist(node *root){
	
	Linklist l; 
	if(root==NULL){
		l.head=l.tail=NULL;
	
		return l;
	}

	// one node or leaf node 
	else if(root->right == NULL && root->left==NULL){
		l.head=root;
		l.tail=root;
		
	}
	//only left tree is present
	else if(root->left!= NULL && root->right==NULL){
		Linklist  leftLL = bst_to_Linklist(root->left);
			leftLL.tail->right=root;
			l.head=leftLL.head;
			l.tail = root;

	}
	// only right tree is present
	else if(root->right!=NULL && root->left==NULL ){
		Linklist  rightLL = bst_to_Linklist(root->right);
			root->left=rightLL.head;
			l.head=root;
			l.tail=rightLL.tail;
	}
	// tree has both right and left node
	else
	{
		Linklist  leftLL = bst_to_Linklist(root->left);
		Linklist  rightLL = bst_to_Linklist(root->right);
		leftLL.tail->right=root;
		root->right =rightLL.head;
			
			l.head=leftLL.head;
			l.tail=rightLL.tail;


	}



	return l;
}


int main(int argc, char const *argv[])
{
	 node *root = NULL;
	/*
 	takeInput (root);
	while(1){

		int key ;
		cout<<"ENTER THE KEY TO DELETE "<<endl;
		cin>>key;
		
	 delete_bst(  root ,   key);
	 cout<<endl;
	  level_order_print(root);
	}

	*/
	 int arr[]={1 ,2 , 4 ,5 ,6 ,9};
	 int n = sizeof(arr)/sizeof(arr[0]);

	root =arraytobst(arr,0,n-1);
	Linklist l=	bst_to_Linklist(root);
	node * temp = l.head;

	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->right;
	}

//		if(isbst(root))
//			cout<<" yes bst "<<endl;
//		else
//			cout<<"NO bst "<<endl;
	// preorder(root);
//	 level_order_print(root);
//	cout<<height(root)<<endl;
//	cout<<isbalanced(root);
//	cout<<isbalanced_fast(root).isbalancedd;

	return 0;
}