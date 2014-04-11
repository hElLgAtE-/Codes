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

int minvalue(struct node *root)
{
	struct node *tmp=root;
	while(tmp->left!=NULL){
		tmp=tmp->left;}
	return(tmp->info);
}

int maxvalue(struct node *root)
{
	struct node *p=root;
	while(p->right!=NULL)
	{
		p=p->right;
	}
	return(p->info);
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
	int min=minvalue(root);
	int max=maxvalue(root);
	printf("min value is %dand max value is %d",min,max);
	return 0;

}
