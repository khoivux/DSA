#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
int cnt = 0;
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
int high(node *root)
{
    if(root == NULL) return -1;
    return max(high(root->left) + 1, high(root->right) + 1);
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
    cout << high(root);
}