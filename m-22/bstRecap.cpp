#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left = NULL;
    Node *right = NULL;

    Node(int val)
    {
        this->val = val;
    }
};

Node *inputTree()
{
    int num;
    cin >> num;
    Node *root = NULL;
    queue<Node *> q;
    if (num != -1)
    {
        root = new Node(num);
        q.push(root);
    }

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        //////////////////////
        int leftV, rightV;
        cin >> leftV >> rightV;

        if (leftV != -1)
        {
            Node *newLeft = new Node(leftV);
            curr->left = newLeft;
        }
        if (rightV != -1)
        {
            Node *newRight = new Node(rightV);
            curr->right = newRight;
        }
        ///////////////////////////////////
        if (curr->left)
        {
            q.push(curr->left);
        }
        if (curr->right)
        {
            q.push(curr->right);
        }
    }
    return root;
}

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
bool findByBST(Node *root, int val)
{
    if (root == NULL)
    {
        return false;
    }

    if (val == root->val)
    {
        return true;
    }
    else if (val < root->val)
    {
        return findByBST(root->left, val);
    }
    else
    {
        return findByBST(root->right, val);
    }
}
void inputNuminBST(Node *&root, int val)
{
    if (root == NULL)
    {
        Node *newNode = new Node(val);
        root = newNode;
        return;
    }

    if (val < root->val)
    {
        if (root->left)
        {

            inputNuminBST(root->left, val);
        }
        else
        {
            Node *newNode = new Node(val);
            root->left = newNode;
        }
    }
    else if (val > root->val)
    {
        if (root->right)
        {
            inputNuminBST(root->right, val);
        }
        else
        {
            Node *newNode = new Node(val);
            root->left = newNode;
        }
    }
}
int main()
{
    Node *root = inputTree();
    printByLevel(root);

    findByBST(root, 6) ? cout << "allready Found\n" : cout << "inputting\n";

    if (!findByBST(root, 6))
    {
        inputNuminBST(root, 6);
    }
    printByLevel(root);

    return 0;
}