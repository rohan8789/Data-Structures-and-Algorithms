#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BST
{
public:
    T data;
    BST<T> *left;
    BST<T> *right;
    BST(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BST()
    {
        delete left;
        delete right;
    }
};

BST<int> *Delete(BST<int> *root, int n)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (n == root->data)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL)
        {
            BST<int> *temp = root->right;
            root->right = NULL;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            BST<int> *temp = root->left;
            root->left = NULL;
            delete root;
            return temp;
        }
        else
        {
            //replacing with closest higher value which is on righ side in bst
            //which is
            //leftmost leaf of the right child or rightmost leaf of the left child
            BST<int> *min = root->right;
            if (min->left != NULL)
            {
                min = min->left;
            }
            root->data = min->data;
            root->right = Delete(root->right, min->data);
            return root;
        }
    }
    else if ( n < root->data)
    {
        return Delete(root->left, n);
    }
    else if (n > root->data)
    {
        return Delete(root->right, n);
    }
    return root;
}
// 20 15 30 40 50 12 18 35 80 7
BST<int> *insert(BST<int> *root, int data)
{
    if (root == NULL)
    {
        BST<int> *r = new BST<int>(data);
        return r;
    }
    if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

BST<int> *takeInput()
{
    int rootData;
    cout << "ENter rootData: ";
    cin >> rootData;
    if (rootData == -1)
        return NULL;
    BST<int> *root = new BST<int>(rootData);
    int data;
    cout << "Enter data to form tree: ";
    cin >> data;
    while (data != -1)
    {
        cout << "Enter data to form tree: ";
        root = insert(root, data);
        cin >> data;
    }
    return root;
}

void print(BST<int> *root)
{
    if (root == NULL)
        return;
    cout << root->data << ": ";
    if (root->left != NULL)
    {
        cout << "L: " << root->left->data << ", ";
    }

    if (root->right != NULL)
    {
        cout << "R: " << root->right->data << ", ";
    }
    cout << endl;
    print(root->left);
    print(root->right);
}

int main()
{
    BST<int> *root = takeInput();
    print(root);
    int n;
    cout << "Number to delete from tree: ";
    cin >> n;
    root = Delete(root, n);
    print(root);
    queue<int> q;
    

    return 0;
}