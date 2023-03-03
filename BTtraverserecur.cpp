#include<iostream>
using namespace std;

class treenode
{
  char data[10];
  treenode *left;
  treenode *right;
  friend class tree;
};
//________________________________________________________________

class tree
  {
   treenode *root;
   public:
  tree();
    void create_r();
    void create_r(treenode*);
    void inorder_r(treenode*);
    void inorder();
    void postorder();
    void postorder_r(treenode*);
    void preorder();
    void preorder_r(treenode*);
  };
//________________________________________________________________  
   
void tree::create_r()
{
root=new treenode;   // new allocate memory
cout<<"Enter data"<<endl;
cin>>root->data;
root->left=NULL;
root->right=NULL;
create_r(root);

}

void tree::create_r(treenode* temp)
{
treenode *curr;
int ch;
cout<<"For node "<<temp->data<<" add left child , enter choice 1.yes 2.no"<<endl;
cin>>ch;
if(ch==1)
{
curr=new treenode;
cout<<"enter data"<<endl;
cin>>curr->data;
curr->left=NULL;
curr->right=NULL;
temp->left=curr;
create_r(curr);

}
cout<<"For node "<<temp->data<<" add right child , enter choice 1.yes 2.no"<<endl;
cin>>ch;

if(ch==1)
{
curr=new treenode;
cout<<"enter data"<<endl;
cin>>curr->data;
curr->left=NULL;
curr->right=NULL;
temp->right=curr;
create_r(curr);

}

}
//____________________________________________________________________________________________
//INORDER
void tree::inorder()
{
inorder_r(root);
}
//____________________________________________________
void tree::inorder_r(treenode* temp)
{
if(temp !=NULL)
{
inorder_r(temp->left);
cout<<temp->data<<endl;
inorder_r(temp->right);
}
}

//___________________________________
void tree::postorder()
{
postorder_r(root);
}
//____________________________________________________
void tree::postorder_r(treenode* temp)
{
if(temp !=NULL)
{
postorder_r(temp->left);
postorder_r(temp->right);
cout<<temp->data<<endl;
}
}

//___________________________________
void tree::preorder()
{
preorder_r(root);
}
//____________________________________________________
void tree::preorder_r(treenode* temp)
{
if(temp !=NULL)
{
cout<<temp->data<<endl;
preorder_r(temp->left);
preorder_r(temp->right);
}
}
   
 tree::tree()
 {
 root=NULL;  
   }
   
  
   int main()
   {
   tree bt;
   bt.create_r();
   cout << "The inorder display of the tree is: " << endl;
   bt.inorder();
      cout << "The postorder display of the tree is: " << endl;
   bt.postorder();
   cout << "The postorder display of the tree is: " << endl;
   bt.preorder();
   }
