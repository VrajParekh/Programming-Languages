// for doubly LL
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void Insert(int val)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    if (head == NULL)
    {
        newNode->next = NULL;
        newNode->prev = NULL;
        head = newNode;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = NULL;
    }
}
void delete_desired(int val)
{
    struct node *temp = head;
    if (temp->data == val)
    {
        head = head->next;
        free(temp);
        cout << "\nNode deleted" << endl;
    }
    else
    {
        while (temp->next->data != val)
        {
            temp = temp->next;
        }
        struct node *del = temp->next;
        if (temp->next->next == NULL)
        {
            temp->next = NULL;
            free(del);
            cout << "\nNode deleted" << endl;
        }
        else
        {
            temp->next = del->next;
            del->next->prev = temp;
            free(del);
            cout << "\nNode deleted" << endl;
        }
    }
}
int main()
{
    int val;
    Insert(2);
    Insert(5);
    Insert(9);
    Insert(10);
    Insert(155);
    Insert(252);
    cout << "Before deletetion linked list looks like:" << endl;
    display();
    cout << "\nEnter the node that you want to delete:" << endl;
    cin >> val;
    delete_desired(val);
    cout << "\nAfter deletion linked list looks like:" << endl;
    display();

    return 0;
}

// for circular doubly LL
// #include <iostream>
// using namespace std;
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// };
// struct node *head = NULL;
// void display()
// {
//     struct node *temp = head;
//     while (temp->next != head)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << temp->data;
// }
// void Insert(int val)
// {
//     struct node *newNode = (struct node *)malloc(sizeof(struct node));
//     newNode->data = val;
//     if (head == NULL)
//     {
//         head = newNode;
//         head->next = head;
//         head->prev = head;
//     }
//     else
//     {
//         struct node *temp = head;
//         while (temp->next != head)
//         {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->prev = temp;
//         newNode->next = head;
//     }
// }
// void delete_desired(int val)
// {
//     struct node *temp = head;
//     if (temp->data == val)
//     {
//         while (temp->next != head)
//         {
//             temp = temp->next;
//         }
//         temp->next = head->next;
//         head->next->prev = temp;
//         free(head);
//         head = temp->next;
//         cout << "\nNode deleted" << endl;
//     }
//     else
//     {
//         while (temp->next->data != val)
//         {
//             temp = temp->next;
//         }
//         struct node *del = temp->next;
//         if (temp->next->next == head)
//         {
//             struct node *del = temp->next;
//             temp->next = head;
//             head->prev = temp;
//             free(del);
//             cout << "\nNode deleted" << endl;
//         }
//         else
//         {
//             temp->next = del->next;
//             del->next->prev = temp;
//             free(del);
//             cout << "\nNode deleted" << endl;
//         }
//     }
// }
// int main()
// {
//     int val;
//     Insert(2);
//     Insert(5);
//     Insert(9);
//     Insert(10);
//     Insert(155);
//     Insert(252);
//     cout << "Before deletetion linked list looks like:" << endl;
//     display();
//     cout << "\nEnter the node that you want to delete:" << endl;
//     cin >> val;
//     delete_desired(val);
//     cout << "\nAfter deletion linked list looks like:" << endl;
//     display();

//     return 0;
// }