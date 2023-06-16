#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create()
{
    int choice;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    cout << "\nEnter 0 to exit\nEnter 1 for new node" << endl;
    cin >> choice;
    if (choice == 0)
        return 0;
    else
    {
        cout << "Enter data:" << endl;
        cin >> temp->data;
        cout << "Enter left child of " << temp->data;
        temp->left = create();
        cout << "Enter right child of " << temp->data;
        temp->right = create();
        return temp;
    }
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
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
int main()
{
    struct node *root;
    root = create();
    // tree looks like:
    //        2
    //      /   \
    //     1     4
    //    / \   / \
    //   11 12 N   3    //N = NULL
    cout << "Pre order : ";
    preOrder(root);
    cout << "\nPost order : ";
    postOrder(root);
    cout << "\nIn order : ";
    inOrder(root);
    return 0;
}
