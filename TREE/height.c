#include<stdio.h>
#include<stdlib.h>

struct node{
		int info;
		struct node *left;
		struct node *right;
	};
	
struct node *insert(int val)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=val;
	tmp->left=NULL;
	tmp->right=NULL;
	return(tmp);
}

int height(struct node *root)
{
	if(root==NULL)
		return 0;
	else{
		int lheight=height(root->left);
		int rheight=height(root->right);
		
		if(lheight>rheight)
			return (lheight+1);
		else
			return (rheight+1);
		}
}

int main()
{
	struct node *root=insert(4);
	root->left=insert(5);
	root->right=insert(6);
	root->left->left=insert(7);
	//root->left->left->left=insert(8);
	root->left->right=insert(9);
	root->right->left=insert(10);
	
	printf("the height of the tree is %d",height(root));
	return 0;
}
