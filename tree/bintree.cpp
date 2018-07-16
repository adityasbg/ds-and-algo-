#include<iostream>
#include<queue>
using namespace std;

class node
{

	
public:
	int data;
	node * left;
	node * right;

	node( int  d){
		data =d;
		left=NULL;
		right=NULL;
	}
	~node();
	
};

node * buildtree() {

		int d ;
		cin>>d;

	if(d==-1){
		return NULL;
	}

	node * newnode = new node(d);

	newnode->left = buildtree();
	newnode->right =buildtree();


	return newnode;
}

 void preorder(node * root){

 		if(root == NULL)
 			return;
 		cout<< root->data<<" , ";
 		preorder(root->left);
 		preorder(root->right);



 }


  void inorder(node * root){

 		if(root == NULL)
 			return;
 		
 		preorder(root->left);
 		cout<< root->data<<" , ";
 		preorder(root->right);



 }


  void postorder(node * root){

 		if(root == NULL)
 			return;
 		
 		preorder(root->left);
 		preorder(root->right);
 		cout<< root->data<<" , ";


 }
 // 5 6 -1  7 -1 -1 8 9  -1 -1 -1 

 int height(node * root){
 	if (root ==NULL)
  	{
 		return 0;
 	}

 	int left = height(root->left);
 	int right = height( root->right);

 	return max(left , right)+1;

 }

 int count ( node * root){
 	int left =0 ;
 	int right =0;
 	if(root==NULL){
 		return 0;
 	}

 	 left += count( root->left);
 	 right += count( root-> right);

 	return ( left + right)+1;
 }

 void level_trav_one( node * root , int k){

 	if( root == NULL){
 		return ;
 	}
 	if( k == 0){
 		cout<<root->data <<" ";
 	}
 	level_trav_one(root->left, k-1);
 	level_trav_one(root->right, k-1);



 }
 void level_trav_all(node * root )
{

 int  h = height(root);

 for(int i =0 ; i<= h ; i++){
 	level_trav_one(root , i);
 	cout<<endl;
 } 



}

// replace every node with sum of childlen 

int   replace_child_sum(node * root){
	int tmp ; 
	if (root == NULL){
		return 0;
	}
	tmp =root->data;
	int left=	replace_child_sum(root->left);
	 int right =	 replace_child_sum(root->right);
	 root->data=  left + right + tmp;

	 return root->data;
}

//5 6 1 -1 -1 12 -1 -1 7 3 -1- 1 9 -1 -1
// 5 6 7 -1 -1 -1 8 9 -1 -1 -1
// 5 6 8 -1 -1 1 -1 -1 7 -1 -1

int replace_with_sum ( node * root){

		if(root==NULL){
			return 0;
		}

		if(root->left==NULL    &&  root->right == NULL){
			return root->data;
		}
		int left =replace_with_sum(root->left);
		int right =replace_with_sum(root->right);\
		int temp = root->data;
		root->data= left+right;
		return root->data +temp;

}
//1 2 4 -1 -1 5 8 10 -1 -1 -1 -1 3 6 -1 9 -1 -1 7 - 1 -1 

 int  diameter(node * root)

{

	if (root==NULL)
	{
		 return 0;
	}

	int opt1 = height(root->left)+ height(root->right);
	int opt2 = height(root->left);
	int opt3 = height( root->right);


	 return  max( opt1 , max(opt2 , opt3));

}

void levelorder_input( node * & root){

	int d;
	queue< node * > q;
	cout<<" Enter the root node";
	cin>>d;
	root = new node(d);
	q.push(root);

	while(!q.empty()){

		node * parent = q.front();
		q.pop(); 
		int c1 ; int c2 ;

	                                 
			cout<<" enter the children of "<<parent->data<<" ";
			cin>>c1>>c2;

			if(c1!=-1){
				parent->left= new node(c1);
				q.push(parent->left);
			} 

			if(c2!=-1){
				parent->right = new node(c2);
				q.push(parent->right);
			}
	

	}
}

void level_order_trav2( node * & root){

		if( root == NULL)
			return;


	queue < node * > q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){

		node * current = q.front();

		if(current== NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}
			else
			{	
				q.pop();
				cout<<current->data<<" ";
				
			
			
				if(current->left)	
					q.push(current->left);

				if (current->right)	
					q.push(current->right);
				
	
			}

	}

}


class mypair
{
public:
	int height ;
	int diameter;


	
};
 
 mypair fastDiameter(node * root){
 		mypair p;
 		if(root==NULL){
 			p.height =0;
 			p.diameter=0;
 			return p;
 		}

 	mypair left = fastDiameter(root->left);
 	mypair right = fastDiameter(root->right);
 	int d1 = left.diameter;
 	int d2 = right.diameter;
 	int h1 = left.height;
 	int h2 = right.height;

 	p.diameter = max(h1+h2 , max(d1 , d2));
 	p.height= max(h1,h2)+1;
 	return p;




 }
//find the subset of nodes with maximun sum if a node is included in the subset
// then you cant include parent nad childeren of that node in subset

class maxsum
{
public:
 	int includ;
 	int exclude;
	
};

maxsum   maxsumWithORWithOutRoot(node * root){	
      maxsum p;
	if(root==NULL){
		p.includ = 0 ; 
		p.exclude =0;
		return p;
	}

	maxsum left = maxsumWithORWithOutRoot(root->left);
	maxsum right = maxsumWithORWithOutRoot(root->right);
	p.includ = root->data+ left.includ + right.exclude;
	p.exclude=  max(left.includ , left.exclude) + max(right.includ , right.exclude);


	return p ;

}

// mirror tree just swap left and right pointer-

int main(int argc, char const *argv[])
{
	node * root =NULL;
	//root=buildtree();

  levelorder_input(root);
	//level_trav_all(root);
 cout<<" diameter"<<diameter(root)<<endl;

  //level_order_trav2(root);
  //cout<< fastDiameter(root).diameter;
maxsum p=	maxsumWithORWithOutRoot(root);
cout<< max(p.includ , p.exclude);
	return 0;
}