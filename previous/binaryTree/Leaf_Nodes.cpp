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

vector<int> leafNodes(Node *root)
{
    queue<Node *> q;
    vector<int> v;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        //////////

        if (f->left == NULL && f->right == NULL)
        {
            v.push_back(f->val);
        }

        /////////
        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
    return v;
}

int main()
{
    Node *root = inputTree();
    // PrintTree(root);

    vector<int> v = leafNodes(root);
    sort(v.begin(), v.end(), greater<int>());
    for (auto val : v)
    {
        cout << val << " ";
    }

    return 0;
}