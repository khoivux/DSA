#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
vector<int> adj[1000], t_adj[1000];
stack<int> st;
bool visited[1000];

// Lưu thứ tự duyệt các đỉnh vào Stack <Topo>
void DFS1(int u)
{
    visited[u] = true;
    for(auto v : adj[u])
    {
        if(!visited[v])
        {
            DFS1(v);
        }
    }
    st.push(u);
}

// Lấy lần lượt các đỉnh trong stack
// Coi là đỉnh nguồn vào DFS trên t_adj
// => Các đỉnh trong thành phần liên thông mạnh
void DFS2(int u)
{
    //cout << u << " ";
    visited[u] = true;
    for(auto v : t_adj[u])
    {
        if(!visited[v])
        {
            DFS2(v);
        }
    }
}

void Kosaraju()
{
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            DFS1(i);
        }
    }
    int cnt = 0; // Đếm thành phần liên thông mạnh
    memset(visited, false, sizeof(visited));
    while(!st.empty())
    {
        int top = st.top(); st.pop();
        if(!visited[top])
        {
            ++cnt;
            DFS2(top);
        }
    }
    if(cnt == 1) cout << "Lien thong manh";
    else cout << "Khong lien thong manh";
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(visited, false, sizeof(visited));

    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        t_adj[y].push_back(x);
    }
    Kosaraju();
}