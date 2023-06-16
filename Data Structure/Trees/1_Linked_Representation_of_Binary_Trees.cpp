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
int main()
{
    struct node *p = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(4);
    struct node *p3 = createNode(11);
    struct node *p4 = createNode(12);
    struct node *p5 = createNode(3);
    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    p2->right = p5;

    // tree looks like:
    //        2
    //      /   \
    //     1     4
    //    / \   / \
    //   11 12 N   3    //N = NULL
    return 0;
}
// #include <iostream>
// using namespace std;
// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };
// struct node *create()
// {
//     int choice;
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     cout << "\nEnter 0 to exit\nEnter 1 for new node" << endl;
//     cin >> choice;
//     if (choice == 0)
//         return 0;
//     else
//     {
//         cout << "Enter data:" << endl;
//         cin >> temp->data;
//         cout << "Enter left child of " << temp->data;
//         temp->left = create();
//         cout << "Enter right child of " << temp->data;
//         temp->right = create();
//         return temp;
//     }
// }
// int main()
// {
//     struct node *root;
//     root = create();
//     // tree looks like:
//     //        2
//     //      /   \
//     //     1     4
//     //    / \   / \
//     //   11 12 N   3    //N = NULL
//     return 0;
// }