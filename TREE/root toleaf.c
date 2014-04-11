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

void printarray(int arr[],int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void printpathsRecu(struct node *root,int path[],int pathlen)
{
	if(root==NULL) return ;
	path[pathlen]=root->info;
	pathlen++;
	if((root->left==NULL)&&(root->right==NULL))
	{
		printarray(path,pathlen);
	}
	else
	{
		printpathsRecu(root->left,path,pathlen);
		printpathsRecu(root->right,path,pathlen);
	}
}

void Printpaths(struct node *root)
{
	int path[10000];
	printpathsRecu(root,path,0);
}

int main()
{
	struct node *root=insert(3);
	root->left=insert(5);
	root->right=insert(6);
	root->left->left=insert(7);
	root->left->left->left=insert(8);
	root->left->right=insert(9);
	root->right->left=insert(10);
	
	Printpaths(root);
	return 0;

}
