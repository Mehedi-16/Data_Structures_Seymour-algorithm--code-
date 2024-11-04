// DFS
#include <iostream>
using namespace std;
#define MX 100
vector<int>graph[MX];
bool vis[MX];

void dfs(int source)
{
    stack<int> s;
    vis[source]=1;
       s.push(source);
    while (!s.empty())
    {
        int node=s.top();
        s.pop();
for (int i = 0; i <graph[node].size(); i++)
{
    int next=graph[node][i];

    if (vis[next]==0)
    {
        vis[next]==1;
        s.push(next);
    }
    
}

    }
    
}

int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int source;
    cin>>source;
    dfs(source);
}