#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void deleteHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "No Items available" << endl;
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    cout << "Deleted" << deleteNode->value << "(" << deleteNode->next << ")"
         << " " << endl;
    delete deleteNode;
}

void deleteANode(Node *head, int pos)
{
    Node *current = head;

    for (int i = 1; i < pos; i++)
    {
        current = current->next;
        if (current == NULL)
        {
            cout << "maximum position = " << i << endl;
            cout << "You can't delete outside the maximum position" << endl;
            return;
        }
    }
    if (current->next == NULL)
    {
        cout << "invalid index" << endl;
        return;
    }
    cout << "Deleted" << current->next->value << "(" << current->next->next << ")"
         << " " << endl;
    ;
    Node *value = current->next;
    current->next = current->next->next;
    delete value;
}

void insertAsHead(Node *&head, int v)
{
    Node *newHead = new Node(v);
    newHead->next = head;
    head = newHead;
    cout << "Inserted as Head" << endl;
}
void insertNode(Node *&head, int v)
{

    if (head == NULL)
    {
        head = new Node(v);
        // cout << head->next << endl;
        cout << "Insert as a Head" << endl;
        return;
    }
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    Node *newitem = new Node(v);
    current->next = newitem;
    cout << "Insert as a Tail" << endl;
}

void insertNodeWithPosition(Node *head, int pos, int val)
{
    if (head == NULL)
    {
        cout << "Insert Some Item First" << endl;
        return;
    }
    Node *current = head;
    for (int i = 1; i < pos; i++)
    {
        current = current->next;
        if (current == NULL)
        {
            cout << "maximum position = " << i << endl;
            cout << "You can't add outside the maximum position" << endl;
            return;
        }
    }

    Node *newNode = new Node(val);
    newNode->next = current->next;
    current->next = newNode;
}

void printNode(Node *head)
{
    cout << "Printing the list" << endl;
    if (head == NULL)
    {
        cout << "empty List" << endl;
        return;
    }
    Node *current = head;
    while (current != NULL)
    {
        cout << current->value << "(" << current->next << ")"
             << " ";
        current = current->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;

    while (1)
    {
        cout << endl
             << endl
             << "NodeList Manager" << endl;
        cout << "1. Insert a Node" << endl;
        cout << "2. Show Me The List" << endl;
        cout << "3. Insert in Specific Position" << endl;
        cout << "4. Tarminate The Program" << endl;
        cout << "5. Delete A Node" << endl;
        cout << "------------------------------" << endl
             << endl;

        int options;

        cin >> options;

        if (options == 1)
        {
            int num;
            cout << "Insert a New Value to The LinkedList" << endl;
            cin >> num;
            insertNode(head, num);
        }

        if (options == 2)
        {

            printNode(head);
        }
        if (options == 4)
        {

            break;
        }
        if (options == 5)
        {

            cout << "Insert The Position of Node : ";
            int pos;
            cin >> pos;
            if (pos == 0)
            {
                deleteHead(head);
            }
            else
            {

                deleteANode(head, pos);
            }
        }
        if (options == 3)
        {

            cout << "Insert Your Position & value" << endl;
            int pos, val;
            cin >> pos >> val;
            if (pos == 0)
            {
                insertAsHead(head, val);
            }
            else
            {

                insertNodeWithPosition(head, pos, val);
            }
        }
    }

    return 0;
}