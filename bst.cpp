#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	char key;
	struct node *right;
	struct node *left;
};
struct node *newNode(int item)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->key=item;
	temp->right=NULL;
	temp->left=NULL;
	return temp;
}
struct node *create(struct node *root,int data)
{
	if(root==NULL)
        return newNode(data);
	else if(root->key<data)
	{
		root->right=create(root->right,data);
	}
	else
	{
		root->left=create(root->left,data);
	}
	return root;
}
struct node* searching(struct node* root, int k)
{
    if (root == NULL || root->key == k)
        return root;
    if (root->key < k)
        return searching(root->right, k);
    else{
    return searching(root->left, k);
}
}
struct node* findmin(struct node *root)
{
 while(root->left!=NULL)
 {
     root=root->left;
 }
 return root;
}
  struct node* deleteNode(struct node* root, int k)
{
    if(root == NULL)
	    return root;
	else if(k < root->key)
        root->left = deleteNode(root->left,k);
	else if (k > root->key)
        root->right = deleteNode(root->right,k);
	else
	{
		if(root->left == NULL && root->right == NULL)
		{
			delete root;
			root = NULL;
		}
		else if(root->left == NULL)
		{
			 node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL)
		{
			node *temp = root;
			root = root->left;
			delete temp;
		}
		else {
			node *temp = findmin(root->right);
			root->key = temp->key;
			root->right = deleteNode(root->right,temp->key);
		}
	}
	return root;
}
void print2DUtil(node* root, int space)
{
	int count=10;
    if (root == NULL)
        return;
    space += count;
    print2DUtil(root->right, space);
    cout << endl;
    for (int i = count; i < space; i++)
        cout << " ";
    cout << root->key << "\n";
    print2DUtil(root->left, space);
}
void print2D(node* root)
{
    print2DUtil(root, 0);
}
int main()
{
	char data='a';
	char del;
	struct node *root=NULL;
	char k;
	/*while(data!=0)
	{
		cout<<"enter the data:";
		cin>>data;
		if(data!='*')
		{
		root=create(root,data);
	    }
    }*/
    int n=5;
    for(int i=0;i<n;i++)
    {
        cout<<"data:";
        cin>>data;
        root=(create(root,data));
    }
	cout<<"enter the key to be searched:";
	cin>>k;
	if(searching(root,k)==NULL)
	{
		cout<<k<<" not found";
	}
	else
	{
		cout<<k<<"found";
	}
	print2D(root);
	cout<<"enter the value to be deleted:";
	cin>>del;
	root=deleteNode(root,del);
	cout<<"tree after deletion";
	print2D(root);
	return 0;
}
