#include <iostream>
using namespace std;

#define MAX 100

void transitiveClosure(int graph[][MAX], int n)
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }
     //print 
    cout << "Path matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, graph[MAX][MAX];
    cout << "Enter number of nodes: ";
    cin >> n;
    //input 
    cout << "Enter adjacency matrix (0 or 1):\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    transitiveClosure(graph, n);
    return 0;
}