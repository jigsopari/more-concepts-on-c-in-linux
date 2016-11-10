#include<stdio.h>
#include<stdlib.h>
typedef struct mynode_tag
{
	int data;
	struct mynode_tag *left;
	struct mynode_tag *right;
}mynode;

void insert(mynode **rt,int no)
{
	mynode *tmp;
	if(*rt== NULL)
	{
		tmp=(mynode *) malloc(sizeof(mynode));
		if(tmp==NULL)
		{
			fprintf(stderr,"unable to allocate memory");
			exit(1);
		}
		tmp->data=no;
		*rt=tmp;
	}
	else
	{
		if(no>(*rt)->data)
			insert(&(*rt)->right,no);
		else
			insert(&(*rt)->left,no);
	}
}
void print_node(mynode *root)
{
	if(root ==NULL)
		return ;
	if(root->left != NULL)
		print_node(root->left);
	printf("data=%d\n",root->data);

	if(root->right !=NULL)
		print_node(root->right);
}			
int main(int argc, char *argv[])
{
	int num[14]={19,6,85,2,25,90,41,23,11,7,99,82,48,32};
	int i;
	mynode *root= NULL;
	for(i=0;i<14;i++)
	{
		insert(&root,num[i]);
	}
	print_node(root);
	return 0;
}

