// for doubly LL
//  #include <iostream>
//  using namespace std;
//  struct node
//  {
//      int data;
//      struct node *next;
//      struct node *prev;
//  };
//  struct node *head = NULL;
//  void Insert(int val)
//  {
//      struct node *newNode = (struct node *)malloc(sizeof(struct node));
//      newNode->data = val;
//      if (head == NULL)
//      {
//          newNode->next = NULL;
//          newNode->prev = NULL;
//          head = newNode;
//      }
//      else
//      {
//          struct node *temp = head;
//          while (temp->next != NULL)
//          {
//              temp = temp->next;
//          }
//          temp->next = newNode;
//          newNode->prev = temp;
//          newNode->next = NULL;
//      }
//  }
//  void display()
//  {
//      struct node *temp = head;
//      while (temp != NULL)
//      {
//          cout << temp->data << " ";
//          temp = temp->next;
//      }
//  }
//  void insert_desired(int val)
//  {
//      struct node *temp = head;
//      struct node *newNode = (struct node *)malloc(sizeof(struct node));
//      cout << "\nEnter data for new node:" << endl;
//      cin >> newNode->data;
//      while (temp->data != val)
//      {
//          temp = temp->next;
//      }
//      if (temp->next == NULL)
//      {
//          newNode->prev = temp;
//          temp->next = newNode;
//          newNode->next = NULL;
//      }
//      else
//      {
//          newNode->next = temp->next;
//          temp->next->prev = newNode;
//          newNode->prev = temp;
//          temp->next = newNode;
//      }
//  }
//  int main()
//  {
//      int val;
//      Insert(2);
//      Insert(5);
//      Insert(9);
//      Insert(10);
//      Insert(15);
//      Insert(25);
//      cout << "Before insertion linked list looks like:" << endl;
//      display();
//      cout << "\nEnter the desired node after you want to enter a new node:" << endl;
//      cin >> val;

//     insert_desired(val);
//     cout << "\nAfter insertion linked list looks like:" << endl;
//     display();

//     return 0;
// }

// for circular doubly
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
void Insert(int val)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
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
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = head;
    }
}
void display()
{
    struct node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data;
}
void insert_desired(int val)
{
    struct node *temp = head;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    cout << "\nEnter data for new node:" << endl;
    cin >> newNode->data;

    while (temp->data != val)
    {
        temp = temp->next;
    }
    if (temp->next == head)
    {
        temp->next->prev = newNode;
        newNode->next = head;
        temp->next = newNode;
        newNode->prev = temp;
    }
    else
    {
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
}
int main()
{
    int val;
    Insert(2);
    Insert(5);
    Insert(9);
    Insert(10);
    Insert(15);
    Insert(25);
    cout << "Before insertion linked list looks like:" << endl;
    display();
    cout << "\nEnter the desired node after you want to enter a new node:" << endl;
    cin >> val;

    insert_desired(val);
    cout << "\nAfter insertion linked list looks like:" << endl;
    display();

    return 0;
}