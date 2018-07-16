#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node * left;
	node * right;

	node(int d){
		data=d;
		left =NULL;
		right=NULL;
	}

};
int find(int *  in , int inStr , int inEnd , int data){

		for( int i = inStr ; i<=inEnd ; i++){
			if(in[i]== data)
				return i;
		}
}

node * createBst( int *pre , int * in , int inStr , int inEnd ){

	static int preindex= 0;

		if(inStr>inEnd){
			return NULL;
		}
		node * newnode = new node(pre[preindex++]);

		if(inStr == inEnd){
			return newnode;
		}

		// find the index of newnode in inorder array 
		int inIndex = find(in , inStr , inEnd , newnode->data);
		// create tree in left and right node 
		newnode->left =createBst(pre , in , inStr , inIndex-1);
		newnode->right = createBst(pre , in , inIndex+1 , inEnd);

		return newnode;
}

void printInorder(class node* node)
{
  if (node == NULL)
     return;
 
  /* first recur on left child */
  printInorder(node->left);
 
  /* then print the data of node */
  cout<<node->data<<"->";
 
  /* now recur on right child */
  printInorder(node->right);
}
// level order printing 

void level_order_printing(node * root){
	queue<node *> q;
	if(root==NULL)
		return ;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node * current =q.front();

		if(current==NULL){
			cout<<endl;
			q.pop();
				if(!q.empty())
					q.push(NULL);
		}
		else
		{

			cout<<current->data<<" ";
			q.pop();

			if(current->left)	
					q.push(current->left);

				if (current->right)	
					q.push(current->right);



		}


	}





}


class maxbstcount{
public:
	int sz; // size of subtree
	int minn;// max value in subtree
	int maxx; // min value in subtree 
	int ans; // size of largest bst
	bool isBst; // if subtree is bst


};



maxbstcount LARGEST_BST_IN_A_BT(node *root){
	
	// Base cases : When tree is empty or it has
    // one child.
	if(root==NULL){
			maxbstcount temp;
		temp.maxx=INT_MIN;
		temp.minn = INT_MAX;
		temp.sz =0;
		temp.ans=0;
		temp.isBst=true;

		
		return temp;
	}
	if(root->right ==NULL &&  root->left==NULL){
		maxbstcount temp ;
		temp.minn=root->data;
		temp.maxx = root->data;
		temp.sz =1;
		temp.ans=1;
		temp.isBst=true;
		return temp;
	}
	maxbstcount temp ;
		
	maxbstcount left=LARGEST_BST_IN_A_BT(root->left);
	maxbstcount right=LARGEST_BST_IN_A_BT(root->right);

	temp.sz= (left.sz+right.sz)+1;

	if(left.isBst && right.isBst && left.maxx < root->data && right.minn >root->data){   

        	temp.minn = min(left.minn, min(right.minn, root->data));
       	 	temp.maxx = max(right.maxx, max(left.maxx, root->data));   
			temp.isBst =true;
			temp.ans = temp.sz;
			return temp;
	}

	temp.ans=max(left.ans , right.ans);
	temp.isBst=false;



	return temp;

}

int main(int argc, char const *argv[])
{


int n ; 
int pre[1005];
int in[1005];
cin>>n;
for( int i =0 ;i<n ;i++){
	cin>>pre[i];
}
for (int i = 0; i < n; ++i)
{
	cin>>in[i];
}

node * root=NULL;

root =createBst(pre , in , 0 , n-1);
//level_order_printing(root);
cout<<LARGEST_BST_IN_A_BT(root).ans<<endl;


	return 0;
}
