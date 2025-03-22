// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//Structure of node
class Node
{
    public :
      int data;
      Node* left;
      Node* right;
      
      Node(int x)
      {
          data=x;
          left=NULL;
          right=NULL;
      }
};
bool search(Node *root, int x)
{
    if(root==NULL)
    return false;
    
    if(root->data==x)
    return true;
    
    if(x < root->data)
     return search(root->left,x);
     
    return search(root->right,x);
    
}

//Insertion in iteration

bool searchIterative(Node *root, int x)
{
    Node *temp = root;
    while( temp!=NULL) //stopping
    {
        if(temp->data==x)
        return true;
        else if(x< temp->data)
        temp=temp->left;
        else
        temp=temp->right;
        
    }
    return false;
}
Node *insert(Node *root, int x)
{
    if(root==NULL)
    return new Node(x);
    
    if(x < root->data)
         root->left=insert(root->left,x);
    else
        root->right=insert(root->right,x);
         
    return root;
}
int searchMax(Node* root)
    {
        if(root==NULL)
            return -1;
        Node *temp =root;
        while(temp->right!=NULL)
        {
            temp=temp->right;
        }
        return temp->data;
    }
void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
        
    }
}
void preorder(Node *root)
{
    if(root!=NULL)
    {
         cout<<root->data<<endl;
         preorder(root->left);
         preorder(root->right);
        
    }
}
void postorder(Node *root)
{
    if(root!=NULL)
    {
        
         postorder(root->left);
         postorder(root->right);
         cout<<root->data<<endl;
        
    }
}
Node *deleteNode(Node *root, int x)//using recursion
{
    //deletion of leaf node
    if(root==NULL)
    return root;
    
    if(x < root->data)
         root->left=deleteNode(root->left,x);
    else if(x>root->data)
        root->right=deleteNode(root->right,x);
    else
    {
        //leaf node
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }
        
        //1 children
        if(root->left==NULL)
        {
            Node *temp=root->right;
            free(root);
            return temp;
           
        }
        else if(root->right ==NULL)
        {
            Node *temp=root->left;
            free(root);
            return temp;
        }
        
        
        //2children
    }
    
    return root;
}
int main() {
   Node *root= new Node(18);
   root->left= new Node(6);
   root->left->left= new Node(2);
   root->left->right= new Node(8);
   root->right = new Node(20);
  root->right->left= new Node(19);
  
 // cout<<insert(root,1)<<endl;
  //18 6 2 8 20 19
  cout<<searchIterative(root,19)<<endl;
  deleteNode(root,19);
  cout<<searchIterative(root,19)<<endl;
 // preorder(root);
   

    return 0;
}