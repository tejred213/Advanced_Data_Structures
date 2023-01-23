#include<iostream>
using namespace std;
class treenode
{
char data[10];
treenode *left;
treenode *right;
friend class tree;
};

class tree
{
treenode *root;
public:
tree();
void create_nr();
void inorder_r();
void inorder_r(treenode*);
void preorder_r();
void preorder_r(treenode*);
void postorder_r();
void postorder_r(treenode*);
};
tree:: tree()
{
root=NULL;
}
void tree:: create_nr()
{
if(root==NULL)
{
root=new treenode;
cout<<"enter the root node"<<endl;
cin>>root->data;
root->left=NULL;
root->right=NULL;
treenode *temp,*curr;
char con;

do{
temp=root;
int flag=0;
curr= new treenode;
cout<<"enter the current node"<<endl;
cin>>curr->data;
curr->left=NULL;
curr->right=NULL;
         while(flag==0)
        {
char ch;
cout<<"where do you want to add data, left or right of " << temp->data<<endl;
cin>>ch;
if(ch='l')
{
if(temp->left==NULL)
{
temp->left=curr;
flag=1;
}
temp=temp->left;
}
else
{
if(ch=='r')
{
if(temp->right==NULL)
{
temp->right=curr;
flag=1;
}
temp=temp->right;
}
}
        }
cout<<"do you want to continue,y/n"<<endl;
cin>>con;
}while(con=='y');
}
}
void tree ::inorder_r()
{
    inorder_r(root);
}
void tree:: inorder_r(treenode*temp)
{
    if(temp!=NULL)
    {
        inorder_r(temp->left);
        cout<< temp->data;
        inorder_r(temp->right);
    }
}
void tree ::preorder_r()
{
    preorder_r(root);
}
void tree:: preorder_r(treenode*temp)
{
    if(temp!=NULL)
    {
        cout<< temp->data;
        preorder_r(temp->left);
        preorder_r(temp->right);
    }
}
void tree ::postorder_r()
{
    postorder_r(root);
}
void tree:: postorder_r(treenode*temp)
{
    if(temp!=NULL)
    {
        preorder_r(temp->left);
        preorder_r(temp->right);
        cout<< temp->data;
    }
}
int main()
{
tree bt;
bt.create_nr();
bt.inorder_r();
bt.preorder_r();
bt.postorder_r();
return 0;
}
