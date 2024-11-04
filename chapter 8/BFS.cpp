#include <iostream>
using namespace std;
#define MX 100

vector<int> graph[MX];
bool vis[MX];
int dist[MX];
void bfs(int source)
{
    queue<int> Q;
    // initialize
    vis[source] = 1;  // 0 to 1
    dist[source] = 0; // inf to 0
    Q.push(source);
    while (!Q.empty())
    {
        int node = Q.front();
        Q.pop();

        for (int i = 0; i < graph[node].size(); i++) // adjacency add
        {
            int next = graph[node][i];

            if (vis[next] == 0)
            {
                vis[next] = 1;
                dist[next] = dist[node] + 1;
                Q.push(next);
            }
        }
    }
}
int main()
{
    int nodes, edges;
    cout << "Enter Nodes and Edges: ";
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int source;
    cout << "source: ";
    cin >> source;
    bfs(source);

    cout << "Frome Nodes: " << source << endl;

    for (int i = 0; i < nodes; i++)
    {
        cout << "Distance of node " << i << " is " << dist[i] << endl;
    }
}