#include <iostream>
using namespace std;
 
class BST
{
    public:
    int data;
    BST *left, *right;
 
    BST(int value)
    {
        data = value;
        left = right = NULL;
    }
    void Inorder(BST*);
};

 
BST* Insert(BST* root, int value)
{
    if (root==NULL)
    {
        return new BST(value);
    }
 
    if (value > root->data)
    {
        root->right = Insert(root->right, value);
    }
    else
    {
        root->left = Insert(root->left, value);
    }
    return root;
}
 
void Inorder(BST* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}
 
int main()
{
    BST *root = NULL;
    root =Insert(root, 50);
    Insert(root, 30);
    Insert(root, 20);
    Insert(root, 40);
    Insert(root, 70);
    Insert(root, 60);
    Insert(root, 80);
 
    Inorder(root);
    return 0;
}