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
int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        // cout << prev->data << endl;
        return isBST(root->right);
    }
    else
        return 1;
}
int main()
{
    struct node *p = createNode(22);
    struct node *p1 = createNode(12);
    struct node *p2 = createNode(44);
    struct node *p3 = createNode(11);
    struct node *p4 = createNode(13);
    struct node *p5 = createNode(45);
    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    p2->right = p5;

    // tree looks like:
    //        22
    //      /   \
    //     12    44
    //    / \   / \
    //   11 13 N   45    //N = NULL
    inOrder(p);
    cout << endl;
    if (isBST(p))
        cout << "Tree is BST" << endl;
    else
        cout << "Tree is not BST" << endl;
    return 0;
}