#include<stdio.h>
#include<stdlib.h>

struct node{
		int info;
		struct node *left;
		struct node *right;
		};
		
struct node *insert(struct node *root,int val)
{
	struct node *tmp;
	struct node *p=root;
	struct node *par=NULL;
	tmp=(struct node *)malloc(sizeof(struct node *));
	tmp->info=val;
	tmp->left=NULL;
	tmp->right=NULL;
	
	if(root==NULL)
	{
		root=tmp;
		return root;
	}
	else
	{
		while(p!=NULL)
		{
			par=p;
			if(val<p->info) p=p->left;
			else
				p=p->right;
		}
		
		if(par==NULL){root=tmp;return root;}
		else if(val>par->info) par->right=tmp;
		else
			par->left=tmp;
	}
	return root;	
}

int LCA(struct node *root,int n1,int n2)
{
	if(root==NULL||(root->info==n1)||(root->info==n2))
		return -1;
	if((root->left!=NULL)&&(root->left->info==n1)||(root->left->info==n2))
		return (root->info);
	if((root->right!=NULL)&&(root->right->info==n1)||(root->right->info==n2))
		return (root->info);
	if((root->info > n1) && (root->info < n2))
		return (root->info);
	if((root->info > n1) && (root->info > n2))
		return(LCA(root->left,n1,n2));
	if((root->info < n1) && (root->info < n2))
		return(LCA(root->right,n1,n2));
		
}
void inorder(struct node *root)
{
	if(root==NULL) return;
	inorder(root->left);
	printf("%d ",root->info);
	inorder(root->right);
}


int main()
{
	struct node *root=NULL;
	root=insert(root,4);
	root=insert(root,5);
	root=insert(root,8);
	root=insert(root,6);
	root=insert(root,1);
	root=insert(root,9);
	root=insert(root,3);
	root=insert(root,7);
	inorder(root);
	printf("\n");
	int p=LCA(root,5,7);
	printf("the lowest common ancestor of 5 and 7 is :%d",p);
	return 0;
}
