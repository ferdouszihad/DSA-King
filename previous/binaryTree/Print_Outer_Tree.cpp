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

void leftOuterNodes(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    if (root->left)
    {
        leftOuterNodes(root->left);
    }
    else
    {
        if (root->right)
        {
            leftOuterNodes(root->right);
        }
    }
    cout << root->val << " ";
}
void rightOuterNodes(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";

    if (root->right)
    {
        rightOuterNodes(root->right);
    }
    else
    {
        if (root->left)
        {
            rightOuterNodes(root->left);
        }
    }
}
int main()
{
    Node *root = inputTree();
    if (root == NULL)
    {
        return 0;
    }
    if (root)
    {
        if (root->left)
        {
            leftOuterNodes(root->left);
            cout << root->val << " ";
            if (root->right)
                rightOuterNodes(root->right);

            return 0;
        }
        else
        {
            cout << root->val << " ";
            if (root->right)
                rightOuterNodes(root->right);
        }
    }

    return 0;
}