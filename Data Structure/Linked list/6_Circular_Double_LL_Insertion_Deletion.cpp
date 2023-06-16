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
    if (head == NULL)
    {
        cout << "Nothing to print" << endl;
    }
    else
    {
        cout << "\n--Displaying Data--" << endl;
        struct node *temp = head;
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
    cout << "Enter Data:" << endl;
    cin >> newNode->data;
    if (head == NULL)
    {
        head = newNode;
        head->next = head;
        head->prev = head;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        newNode->next = head;
        head->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
        head = newNode;
        // temp->next = newNode;
        // newNode->prev = temp;
        // head->prev = newNode;
        // newNode->next = head;
        // head = newNode;
    }
}
void INsertionAtLast()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter Data:" << endl;
    cin >> newNode->data;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
        head->prev = head;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = head;
        head->prev = newNode;
    }
}
void InsertionAtRandom()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter Data:" << endl;
    cin >> newNode->data;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
        head->prev = head;
    }
    else
    {
        int i = 0, index;
        cout << "Enter Index:" << endl;
        cin >> index;
        struct node *temp = head;
        while (i < index - 1)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
}
void DeletionAtFirst()
{
    if (head == NULL)
    {
        cout << "Empty,can't delete" << endl;
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
        head->next->prev = temp;
        free(head);
        head = temp->next;
    }
}
void DeletionAtLast()
{
    if (head == NULL)
    {
        cout << "Empty,can't delete" << endl;
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
        temp->prev->next = head;
        head->prev = temp->prev;
        free(temp);
    }
}
void DeletionAtRandom()
{
    if (head == NULL)
    {
        cout << "Empty,can't delete" << endl;
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
        temp->next = temp->next->next;
        temp->next->next->prev = temp;
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
             << "3. insertion at random" << endl
             << "4. Deletion at first" << endl
             << "5. Deletion at last" << endl
             << "6. Deletion at random" << endl
             << "7. Display" << endl
             << "8. Exit" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            InsertionAtFirst();
            break;
        case 2:
            INsertionAtLast();
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
            cout << "Invalid Entry" << endl;
            break;
        }
    }
    return 0;
}