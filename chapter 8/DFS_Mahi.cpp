#include <iostream>
#include <vector>
#include <stack>
using namespace std;
#define MX 100
vector<int> graph[MX];
bool vis[MX];

void dfs(int source)
{
    stack<int> st;

    vis[source] = 1;
    st.push(source);

    while (!st.empty())
    {
        int node = st.top();
        st.pop();

        for (int i = 0; i < graph[node].size(); i++)
        {
            int next = graph[node][i];
            if (vis[next] == 0)
            {
                vis[next] = 1;
                st.push(next);
            }
        }
    }
}

int main()
{
    int n, e;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> e;

    cout << "Enter the edges (u v) for an undirected graph:" << endl;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a); // For undirected graph
    }

    int source;
    cout << "Enter source node: ";
    cin >> source;

    dfs(source);

    cout << "Reachable nodes from " << source << ":" << endl;
    for (int i = 0; i < n; i++)
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

    return 0;
}
