#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
int cnt = 1;
int res = -1;
struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
void makeRoot(node *root, int u, int v, char c)
{
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}
void insertNode(node *root, int u, int v, char c)
{
    if(root == NULL) return;
    if(root->data == u)
    {
        makeRoot(root, u, v, c);
    }
    else
    {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}
void spiral(node *root)
{
    stack<node*> s1, s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty())
    {
        while(!s1.empty())
        {
            node *top = s1.top(); s1.pop();
            cout << top->data << " ";
            if(top->right != NULL)
                s2.push(top->right);
            if(top->left != NULL)
                s2.push(top->left);
        }

        while(!s2.empty())
        {
            node *top = s2.top(); s2.pop();
            cout << top->data << " ";
            if(top->left != NULL)
                s1.push(top->left);
            if(top->right != NULL)
                s1.push(top->right);
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    node *root = NULL;
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int u, v; char c;
        cin >> u >> v >> c;
        if(root == NULL)
        {
            root = new node(u);
            makeRoot(root, u, v, c);
        }
        else insertNode(root, u, v, c);
    }
    spiral(root);
}