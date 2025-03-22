#include<iostream>
using namespace std;

class TreeNode
{
    public:
    int data;
    TreeNode* right;
    TreeNode* left;

    TreeNode()
    {
        left=NULL;
        right=NULL;        
    }

    TreeNode(int data)
    {
        this->data = data;
        left=NULL;
        right=NULL;
    }
};


class BST {
private:
    TreeNode* bstroot;
    int size;
public:
    BST() {
        bstroot = NULL;
        size = 0;
    }
    ~BST()
    {
        destroyTree(bstroot);
    }

    TreeNode* getRoot() {
        return bstroot;
    }
    TreeNode* insertNode(int x) {
        bstroot = insertNode(bstroot, x);
        return bstroot;
    }
    TreeNode* insertNode(TreeNode* root, int x) {
        if (root == NULL) {
            root = new TreeNode(x);
        }
        else {
            if (x < root->data)
                root->left = insertNode(root->left, x);
            else if (x > root->data)
                root->right = insertNode(root->right, x);
        }
        return root;
    }
    bool searchRecursive(TreeNode* root, int x) {
        if (root == NULL)
            return false;
        if (x == root->data)
            return true;
        if (x < root->data)
            return searchRecursive(root->left, x);
        else
            return searchRecursive(root->right, x);
    }
    int searchMax(TreeNode* root) {
        TreeNode* dummy = root;
        if (dummy == NULL)
            return -1;
        while (dummy->right != NULL) {
            dummy = dummy->right;
        }
        return dummy->data;
    }
    
    void destroyTree(TreeNode* root) {
        if (root == NULL)
            return;
        destroyTree(root->left);
        destroyTree(root->right);
        delete root;
    }
};

int main()
{
    BST bst;
    bst.insertNode(18);
    bst.insertNode(6);
    bst.insertNode(20);
    bst.insertNode(19);
    bst.insertNode(2);
    bst.insertNode(8);

    cout<<"Searching Key 6 :  "<<bst.searchRecursive(bst.getRoot(),6)<<endl;

    cout<<"Max value : "<<bst.searchMax(bst.getRoot());
    return 0;
}


