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
void printByLevel(Node *root)
{
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        ///////////////////////

        cout << curr->val << " ";

        ///////////////////////
        if (curr->left)
        {
            q.push(curr->left);
        }
        if (curr->right)
        {
            q.push(curr->right);
        }
    }
    cout << endl;
}

Node *arrayToBST(int a[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    int mid = (start + end) / 2;

    Node *root = new Node(a[mid]);
    Node *left = arrayToBST(a, start, mid - 1);
    Node *right = arrayToBST(a, mid + 1, end);
    root->left = left;
    root->right = right;
    return root;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    Node *root = arrayToBST(a, 0, n - 1);

    printByLevel(root);

    return 0;
}