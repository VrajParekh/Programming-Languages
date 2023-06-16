// #include <iostream>
// using namespace std;
// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };
// struct node *createNode(int data)
// {
//     struct node *n = (struct node *)malloc(sizeof(struct node));
//     n->data = data;
//     n->left = NULL;
//     n->right = NULL;
//     return n;
// }
// void inOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         inOrder(root->left);
//         cout << root->data << " ";
//         inOrder(root->right);
//     }
// }
// int inOrderSuccessor(struct node *root,int value)
// {
//     while (root!=NULL)
//     {
//         if(root->data == value)

//     }

// }
// int main()
// {
//     struct node *p = createNode(9);
//     struct node *p1 = createNode(4);
//     struct node *p2 = createNode(11);
//     struct node *p3 = createNode(2);
//     struct node *p4 = createNode(7);
//     struct node *p5 = createNode(15);
//     struct node *p6 = createNode(5);
//     struct node *p7 = createNode(8);
//     struct node *p8 = createNode(14);
//     p->left = p1;
//     p->right = p2;

//     p1->left = p3;
//     p1->right = p4;

//     p4->left = p6;
//     p4->right = p7;

//     p2->right = p5;

//     p5->left = p8;
//     cout << "Tree: ";
//     inOrder(p);
//     int value;
//     cout << "which node's inorder successor you want to find?" << endl;
//     cin >> value;
//     cout << "Inorder Successor Of " << value << " is: " << inOrderSuccessor(p,value);
//     return 0;
// }