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
void PrintTree(Node *root)
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

int maxHeightOfTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    int leftHeight = 0, rightHeight = 0;
    if (root->left)
    {
        leftHeight = maxHeightOfTree(root->left);
    }
    if (root->right)
    {
        rightHeight = maxHeightOfTree(root->right);
    }

    return leftHeight >= rightHeight ? leftHeight + 1 : rightHeight + 1;
}

int main()
{
    Node *root = inputTree();

    int height = maxHeightOfTree(root) - 1;

    int level;
    cin >> level;
    // cout << "h : " << height << endl;
    if (level > height)
    {
        cout << "Invalid\n";
        return 0;
    }

    queue<pair<Node *, int>> q;
    vector<pair<Node *, int>> v;
    bool levelFlag = true;
    if (root)
        q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();
        ////////
        if (level == pr.second)
            v.push_back(pr);

        ///////
        if (pr.first->left)
            q.push({pr.first->left, pr.second + 1});
        if (pr.first->right)
            q.push({pr.first->right, pr.second + 1});
    }

    for (pair<Node *, int> pr : v)
    {
        cout << pr.first->val << " ";
    }
    cout << endl;

    return 0;
}