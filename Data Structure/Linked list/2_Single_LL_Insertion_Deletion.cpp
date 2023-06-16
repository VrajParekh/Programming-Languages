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
    if (head == NULL)
    {
        cout << "Nothing to print" << endl;
    }
    else
    {
        struct node *temp = head;
        cout << "\n--Displaying data--" << endl;
        while (temp->next != NULL)
        {
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << temp->data << "-->NULL" << endl;
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
        head->next = NULL;
    }
    else
    {
        newNode->next = head;
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
        head->next = NULL;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = NULL;
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
        newNode->next = NULL;
    }
    else
    {
        struct node *temp = head;
        int i = 0, index;
        cout << "Enter index:" << endl;
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
        cout << "Empty,can't delete" << endl;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        struct node *temp = head;
        head = temp->next;
        free(temp);
    }
}
void DeletionAtLast()
{
    if (head == NULL)
    {
        cout << "Empty,can't delete" << endl;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        struct node *temp = head;
        struct node *temp2 = head->next;
        while (temp2->next != NULL)
        {
            temp = temp->next;
            temp2 = temp2->next;
        }
        temp->next = NULL;
        free(temp2);
    }
}
void DeletionAtRandom()
{
    if (head == NULL)
    {
        cout << "Empty" << endl;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        struct node *temp = head;
        int i = 0, index;
        cout << "Enter index:" << endl;
        cin >> index;
        while (i < index - 1)
        {
            temp = temp->next;
            i++;
        }
        struct node *del = temp->next;
        temp->next = del ->next;
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
             << "3. Insertion at random index" << endl
             << "4. Deletion at first" << endl
             << "5. Deletion at last" << endl
             << "6. Deletion at random index" << endl
             << "7. Display" << endl
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
            cout << "Not valid" << endl;
            break;
        }
    }
    return 0;
}