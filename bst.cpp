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

        cout << f->val << endl;

        /////////
        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}
bool searchTree(Node *root, int val)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->val == val)
    {
        return true;
    }
    if (root->val > val)
    {
        return searchTree(root->left, val);
    }
    if (root->val < val)
    {
        return searchTree(root->right, val);
    }
}
int main()
{
    Node *root = inputTree();
    printTree(root);
    searchTree(root, 49) ? cout << "true" : cout << "false";

    return 0;
}