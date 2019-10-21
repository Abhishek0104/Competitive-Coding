#include<bits/stdc++.h>
using namespace std;
struct Edge{
    int src, dest, weight;
};
struct Graph{
    int V, E;
    struct Edge* edge;
};
void print(int dist[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << i << "\t" << dist[i] << endl;
    }
}
void BellmanFord(struct Graph* g, int src)
{
    int V = g->V;
    int E = g->E;
    int dist[V];
    for(int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    dist[src] = 0;
    for(int i = 0; i < V-1; i++)
    {
        for(int j = 0; j < E; j++)
        {
            int u = g->edge[j].src;
            int v = g->edge[j].dest;
            int wt = g->edge[j].weight;
            if(dist[u]!=INT_MAX && dist[v] > dist[u] + wt)
                dist[v] = dist[u] + wt;
        }
    }
    for(int i = 0; i < E; i++)
    {
        int u = g->edge[i].src;
        int v = g->edge[i].dest;
        int wt = g->edge[i].weight;
        if(dist[u]!=INT_MAX && dist[v] > dist[u] + wt)
        {
            cout << "Graph has negative weight cycle";
            return;
        }
    }
    print(dist, V);
}
int main()
{
    int v = 5;
    int e = 8;
    struct Graph* graph = new Graph;
    graph->V = v;
    graph->E = e;
    graph->edge = new Edge[e];
    // add edge 0-1 (or A-B in above figure)
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
    graph->edge[0].weight = -1;

    // add edge 0-2 (or A-C in above figure)
    graph->edge[1].src = 0;
    graph->edge[1].dest = 2;
    graph->edge[1].weight = 4;

    // add edge 1-2 (or B-C in above figure)
    graph->edge[2].src = 1;
    graph->edge[2].dest = 2;
    graph->edge[2].weight = 3;

    // add edge 1-3 (or B-D in above figure)
    graph->edge[3].src = 1;
    graph->edge[3].dest = 3;
    graph->edge[3].weight = 2;

    // add edge 1-4 (or A-E in above figure)
    graph->edge[4].src = 1;
    graph->edge[4].dest = 4;
    graph->edge[4].weight = 2;

    // add edge 3-2 (or D-C in above figure)
    graph->edge[5].src = 3;
    graph->edge[5].dest = 2;
    graph->edge[5].weight = 5;

    // add edge 3-1 (or D-B in above figure)
    graph->edge[6].src = 3;
    graph->edge[6].dest = 1;
    graph->edge[6].weight = 1;

    // add edge 4-3 (or E-D in above figure)
    graph->edge[7].src = 4;
    graph->edge[7].dest = 3;
    graph->edge[7].weight = -3;

    BellmanFord(graph, 0);
}
