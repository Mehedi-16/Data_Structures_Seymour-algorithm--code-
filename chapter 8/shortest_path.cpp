#include <iostream>
using namespace std;

#define MAX 100
#define INF 1000000

void floydWarshall(int graph[][MAX], int n)
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                graph[i][j] = min(graph[i][j], (graph[i][k] + graph[k][j]));
            }
        }
    }

    cout << "Shortest path matrix:\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] == INF)
                cout << "INF ";
            else
                cout << graph[i][j] << " ";
        }
        cout << endl; // must dite hobe
    }
}

int main()
{
    int n, graph[MAX][MAX];

    cout << "Enter number of nodes: ";
    cin >> n;
    // input
    cout << "Enter adjacency matrix :\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == 0 && i != j) // If no edge, set to INF
            {
                graph[i][j] = INF;
            }
        }
        cout << endl;
    }

    floydWarshall(graph, n);
    return 0;
}

/*
4
0 3 99999 7
8 0 2 99999
5 99999 0 1
2 99999 99999 0



0 3 5 7
5 0 2 3
3 6 0 1
2 5 7 0
*/
