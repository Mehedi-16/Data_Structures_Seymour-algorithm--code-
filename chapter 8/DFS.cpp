#include <iostream>
using namespace std;


vector<int> graph[5];
bool vis[5];

void dfs(int source)
{
    vis[source] = 1;

    cout << source << " ";
    for (int i = 0; i < graph[source].size(); i++)
    {
        int next = graph[source][i];
        if (vis[next] == 0) // not visited
        {
            dfs(next);
        }
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int source;
    cout << "Enter source node: ";
    cin >> source;
    dfs(source);
    for (int i = 0; i < nodes; i++)
    {
        if (vis[i] == 1)
        {
            cout << "node is " << i << " visited "<<endl;
        }
        else
        {
            cout << "node is " << i << " not visited "<<endl;
        }
    }
}