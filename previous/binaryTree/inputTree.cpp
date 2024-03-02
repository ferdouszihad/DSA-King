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
void levelOrderPrinting(Node *root)
{
    queue<Node *> q;
    q.push(root);
    ////////////////////////
    while (!q.empty())
    {
        Node *f = q.front();
        cout << f->val << endl;
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
        q.pop();
    }
}

Node *scanTree()
{
    queue<Node *> q;

    int n;
    cin >> n;
    Node *root = NULL;
    if (n != -1)
        root = new Node(n);

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        ///////////////////

        Node *newLeft = NULL;
        Node *newRight = NULL;

        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            newLeft = new Node(l);
            curr->left = newLeft;
        }

        if (r != -1)
        {
            newRight = new Node(r);
            curr->right = newRight;
        }

        ///////////////////
        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }
    return root;
}
// Node *scanTree()
// {
//     queue<Node *> q;

//     int n;
//     cin >> n;
//     Node *root;
//     if (n == -1)
//         root = NULL;
//     else
//         root = new Node(n);

//     if (root)
//         q.push(root);

//     while (!q.empty())
//     {
//         Node *curr = q.front();
//         q.pop();
//         ///////////////////

//         Node *newLeft;
//         Node *newRight;

//         int l, r;
//         cin >> l >> r;
//         if (l == -1)
//             newLeft = NULL;
//         else
//             newLeft = new Node(l);

//         if (r == -1)
//             newRight = NULL;
//         else
//             newRight = new Node(r);

//         curr->left = newLeft;
//         curr->right = newRight;

//         ///////////////////
//         if (curr->left)
//             q.push(curr->left);
//         if (curr->right)
//             q.push(curr->right);
//     }
//     return root;
// }

int countNode(Node *root)
{

    if (root == NULL)
    {

        // cout << "returning to previous" << endl;
        return 0;
    }
    else
        // cout << " inside countNode(" << root->val << ")" << endl;

        int Lvalue = root->left ? root->left->val : -1;
    int Rvalue = root->right ? root->right->val : -1;

    // cout << " calling left  countNode(" << Lvalue << ")" << endl;
    int l = countNode(root->left);
    // cout << " calling right countNode(" << Rvalue << ")" << endl;
    int r = countNode(root->right);

    return l + r + 1;
}

int countLeaf(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int leaf = countLeaf(root->left) + countLeaf(root->right);
    return leaf;
}

int countHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int lh = countHeight(root->left);
    int rh = countHeight(root->right);
    if (lh >= rh)
    {
        return lh + 1;
    }
    else
    {
        return rh + 1;
    }
}

int main()
{

    Node *root = scanTree();
    // levelOrderPrinting(root);

    cout << countHeight(root) << endl;

    return 0;
}