#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
struct node *findMin(struct node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
struct node *deletion(struct node *root, int ele)
{        
    if (root == NULL)
        return NULL;
    else if (ele < root->data)
    {
        root->left = deletion(root->left, ele);
    }
    else if (ele > root->data)
    {
        root->right = deletion(root->right, ele);
    }
    else
    {
        // case 1: NO child
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            cout << "Node deleted" << endl;
            root = NULL;
        }
        // case 2: One child
        else if (root->left == NULL)
        {
            struct node *temp = root;
            root = root->right;
            free(temp);
        }
        else if (root->right == NULL)
        {
            struct node *temp = root;
            root = root->left;
            free(temp);
        }
        // case 3: Two children
        else
        {
            struct node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deletion(root->right, temp->data);
        }
    }
    return root;
}
int main()
{
    struct node *p = createNode(9);
    struct node *p1 = createNode(4);
    struct node *p2 = createNode(11);
    struct node *p3 = createNode(2);
    struct node *p4 = createNode(7);
    struct node *p5 = createNode(15);
    struct node *p6 = createNode(5);
    struct node *p7 = createNode(8);
    struct node *p8 = createNode(14);
    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    p4->left = p6;
    p4->right = p7;

    p2->right = p5;

    p5->left = p8;
    inOrder(p);
    int ele;
    cout << "\nEnter Data of node that you want to delete " << endl;
    cin >> ele;

    deletion(p, ele);

    cout << "After Deletion tree: " << endl;
    inOrder(p);
    return 0;
}