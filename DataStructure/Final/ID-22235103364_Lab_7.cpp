#include <iostream>
using namespace std;
struct LinkedList
{
    int data;
    struct LinkedList *next;
};

typedef struct LinkedList *node;

node createNode(int value, node n)
{
    node temp;
    temp = (node)malloc(sizeof(struct LinkedList));
    temp->data = value;
    temp->next = n;
    return temp;
}

node head = NULL;

void addFirst(int value)
{
    head = createNode(value, head);
}

void traverse()
{
    node temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}

void addLast(int value)
{
    node temp = head;
    if (head == NULL)
    {
        createNode(value, head);
        temp = temp->next;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
    }
    temp->next = createNode(value, NULL);
}

void insertAfter(int key, int value)
{
    node temp = head;

    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp != NULL)
        temp->next = createNode(value, temp->next);
}

void insertBefore(int key, int value)
{

    if (head->data == key)
    {
        addFirst(value);
        return;
    }

    node temp = head;
    node prev = NULL;

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp != NULL)
    {
        prev->next = createNode(value, temp);
    }
    else
    {
        cout << "Key not found!" << endl;
    }
}

void deleteNode(int key)
{
    node temp;
    temp = head;

    if (temp->data == key)
    {
        temp = head->next;
        // free(head);
        head = temp;
    }
    else
    {
        node prev;
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp != NULL)
        {
            prev->next = temp->next;
            // free(temp);
        }
    }
}

int main()
{
    addFirst(10);
    traverse();
    addFirst(20);
    addLast(50);
    traverse();

    insertAfter(20, 30);
    traverse();
    insertBefore(20, 5);
    traverse();

    deleteNode(20);
    traverse();

    insertAfter(30, 40);
    traverse();

    return 0;
}
