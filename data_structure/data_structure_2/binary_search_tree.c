#include<stdio.h>
#include<stdlib.h>
struct BST
{
int data;
struct BST * left;
struct BST * right;
};

void  insert(struct BST * root,int data )
{
struct BST * parent ;
struct BST * n= (struct BST *)malloc(sizeof(struct BST));
n->left= NULL;
n->right=NULL;
n->data =data;

if(root == NULL)
root = n;

else
{
parent =root;
while(parent != NULL)
{
if(parent->data > data)
{
if(parent->left == NULL)
{parent->left =n;}
parent = parent->left;
}
if(parent->data < data)
{
if(parent ->right == NULL)
{parent -> right =n;}
parent=parent-> right;
}
}
}
}
struct BST * findmax(struct BST * root)
{


}


struct BST * find(struct BST * root , int data)
{
struct BST * parent = root;
if(root == NULL)
return (NULL);

if(parent->data > data)
{
	return(find(parent->left , data));
}
	else if (parent->data < data)
		return(find(parent->right,data));
	return(parent);
}

struct BST* delete (struct BST * root , int data)
{
struct BST * temp ;
if(root == NULL)
	printf("no such element \n");
if(root->data < data)
{
root->right=(delete(root->right,data));
}
else if(root->data > data)
	root->left=(delete(root->left,data));

if(root->left && root->right)
{
temp=findmax(root->left);  //in left sub-tree we find max value and in right subtree we find min value 
root->data = temp->data;
root->left=delete(root->left,root->data);
}

else 
{
temp=root;
if(root->left == NULL )
	root=root->right;
if(root->right == NULL)
	root= root-> left;

free (temp);
}
}

void preorder(struct BST * root)
{
if(root)
{
printf("%d\t",root->data);
preorder(root->l`eft);
preorder(root->right);
}
printf("\n");
}


void inorder(struct BST * root)
{
if(root)
{
inorder(root->left);
printf("%d\t",root->data);
inorder(root->right);
}
}

void postorder(struct BST * root)
{
if(root)
{
postorder(root->left);
postorder(root->right);
printf("%d",root->data);
}
}

void levelorder(struct BST * root)
{
struct BST * temp;

}


int main()
{
struct BST * root =NULL;

while(1)
{
printf("1.insert\n2.delete \n3.traversal\n");
int choice;
scanf("%d",&choice);
switch(choice)
{
	case 1:{int data;
		       printf("enter the element value\n");
		       scanf("%d",&data);
		       insert(root,data);
	       }
	       break;
	case 2:{int data;
		       printf("enter the element to be delete \n");
		       scanf("%d",&data);
		       delete(root,data);
	       }
	       break;
	case 3:{int choice;
		       printf("1.preorder traversal \n2.inorder traversal\n3.postorder traversal\n4.levelorder traversal\n");
		       scanf("%d",&choice);
	    	       switch(choice)
		       {
			       case 1:preorder(root);
				      break;
			       case 2:inorder(root);
				      break;
			       case 3:postorder(root);
				      break;
			       case 4:levelorder(root);
				      break;
			       default :printf("invalid input\n");
					break;
		       }
      		} 
	       break;

	default : printf("invalid input \n");
			break;
}
}}
