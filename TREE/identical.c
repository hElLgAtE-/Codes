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

int check(struct node *root1,struct node *root2)
{
	if((root1==NULL) && (root2==NULL))
		return 1;
	else if((root1!=NULL )&&(root2!=NULL))
		return(((root1->info)==(root2->info))&&(check(root1->left,root2->left))&&(check(root1->right,root2->right)));
	else
		return 0;
}

int main()
{
	struct node *root1=insert(4);
	root1->left=insert(5);
	root1->right=insert(6);
	
	struct node *root2=insert(4);
	root2->left=insert(5);
	root2->right=insert(7);
	
	if(check(root1,root2))
		printf("both trees are identical \n");
	else
		printf("trees are not identical\n");
	
	return 0;
}
