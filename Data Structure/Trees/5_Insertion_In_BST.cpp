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
int insertion(struct node *root, int ele)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (root->data == ele)
        {
            return 0;
        }
        else if (ele < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *newNode = createNode(ele);
    if (ele < prev->data)
    {
        prev->left = newNode;
    }
    else
    {
        prev->right = newNode;
    }
    return 1;
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
    cout << "\nEnter new Node Data that you want to insert" << endl;
    cin >> ele;

    if (insertion(p, ele))
    {
        cout << "Node inserted" << endl;
        cout << "After Insertion tree: " << endl;
        inOrder(p);
    }
    else
        cout << "cannot insert Node" << endl;
    return 0;
}