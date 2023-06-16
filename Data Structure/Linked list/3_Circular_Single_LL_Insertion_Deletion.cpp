#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void display()
{
    struct node *temp = head;
    if (head == NULL)
    {
        cout << "\nNothing to print" << endl;
    }
    else
    {
        cout << "\n--Displaying data--" << endl;
        while (temp->next != head)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
}
void InsertionAtFirst()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter data:" << endl;
    cin >> newNode->data;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
}
void InsertionAtLast()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter data:" << endl;
    cin >> newNode->data;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}
void InsertionAtRandom()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter data:" << endl;
    cin >> newNode->data;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        int i = 0, index;
        struct node *temp = head;
        cout << "Enetr index:" << endl;
        cin >> index;
        while (i < index - 1)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void DeletionAtFirst()
{
    if (head == NULL)
    {
        cout << "Empty,Can't delete" << endl;
    }
    else if (head->next == head)
    {
        head = NULL;
        free(head);
    }
    else
    {
        struct node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = head->next;
        free(head);
        head = temp->next;
    }
}
void DeletionAtLast()
{
    if (head == NULL)
    {
        cout << "Empty,Can't delete" << endl;
    }
    else if (head->next == head)
    {
        head = NULL;
        free(head);
    }
    else
    {
        struct node *del = head;
        struct node *temp;
        while (del->next != head)
        {
            temp = del;
            del = del->next;
        }
        temp->next = del->next;
        free(del);
    }
}
void DeletionAtRandom()
{
    if (head == NULL)
    {
        cout << "Empty,Can't delete" << endl;
    }
    else if (head->next == head)
    {
        head = NULL;
        free(head);
    }
    else
    {
        int i = 0, index;
        cout << "Enter index:" << endl;
        cin >> index;
        struct node *temp = head;
        while (i < index - 1)
        {
            temp = temp->next;
            i++;
        }
        struct node *del = temp->next;
        temp->next = del->next;
        free(del);
    }
}
int main()
{
    int x;
    while (1)
    {
        cout << "\nEnter your choice:" << endl
             << "1. Insertion at first" << endl
             << "2. Insertion at last" << endl
             << "3. Insertion at random" << endl
             << "4. Deletion at first" << endl
             << "5. Deletion at last" << endl
             << "6. Deletion at random" << endl
             << "7. Diaplay" << endl
             << "8. Exit" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            InsertionAtFirst();
            break;
        case 2:
            InsertionAtLast();
            break;
        case 3:
            InsertionAtRandom();
            break;
        case 4:
            DeletionAtFirst();
            break;
        case 5:
            DeletionAtLast();
            break;
        case 6:
            DeletionAtRandom();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
        default:
            break;
        }
    }

    return 0;
}