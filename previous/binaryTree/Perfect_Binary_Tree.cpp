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

int main()
{
    Node *root = inputTree();
    // PrintTree(root);

    queue<pair<Node *, int>> q;
    vector<pair<Node *, int>> v;

    if (root)
        q.push({root, 1});

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();
        ////////
        v.push_back(pr);
        ///////
        if (pr.first->left)
            q.push({pr.first->left, pr.second + 1});
        if (pr.first->right)
            q.push({pr.first->right, pr.second + 1});
    }

    int level = v.back().second;

    // cout << level << "," << v.size() << endl;

    if (v.size() == int(pow(2, level)) - 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}