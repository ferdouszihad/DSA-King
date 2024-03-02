#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
Node *inputTree()
{
    Node *root = NULL;
    queue<Node *> q;
    int n;
    cin >> n;
    if (n != -1)
    {
        root = new Node(n);
        q.push(root);
    }
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        /////////
        int numL, numR;
        cin >> numL >> numR;
        if (numL != -1)
        {
            Node *newNode = new Node(numL);
            f->left = newNode;
        }
        if (numR != -1)
        {
            Node *newNode = new Node(numR);
            f->right = newNode;
        }

        /////////
        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
    return root;
}
void printTree(Node *root)
{

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        //////////

        cout << f->val << " ";

        /////////
        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
    cout << endl;
}

void insertInBst(Node *&root, int val)
{
    Node *newNode = new Node(val);
    if (root == NULL)
    {
        root = newNode;
        return;
    }
    if (val < root->val)
    {

        if (root->left == NULL)
        {
            root->left = newNode;
            return;
        }
        else
        {
            insertInBst(root->left, val);
        }
    }
    else
    {
        if (val > root->val)
        {
            if (root->right == NULL)
            {
                root->right = newNode;
                return;
            }
            else
            {
                insertInBst(root->right, val);
            }
        }
    }
}

int main()
{
    vector<int> v;
    Node *root = NULL;
    while (1)
    {

        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insertInBst(root, x);
    }
    printTree(root);

    return 0;
}