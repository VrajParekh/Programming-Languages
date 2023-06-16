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
// bool searchIter(struct node *root, int s_ele)
// {
//     while (root != NULL)
//     {
//         if (root->data == s_ele)
//         {
//             return true;
//         }
//         else if (s_ele < root->data)
//         {
//             root = root->left;
//         }
//         else
//         {
//             root = root->right;
//         }
//     }
//     return false;
// }
bool searchRec(struct node *root, int s_ele)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == s_ele)
    {
        return true;
    }
    else if (s_ele < root->data)
    {
        return searchRec(root->left, s_ele);
    }
    else
    {
        return searchRec(root->right, s_ele);
    }
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
    int s_ele;
    cout << "\nEnter search element" << endl;
    cin >> s_ele;

    // if (searchIter(p, s_ele))
    if (searchRec(p, s_ele))
        cout << "Element found" << endl;
    else
        cout << "Element Not found" << endl;
    return 0;
}