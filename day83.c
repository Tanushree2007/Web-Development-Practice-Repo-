#include <stdio.h>

#define V 5  // Number of vertices in graph

void DFS(int graph[V][V], int visited[], int v) {
    visited[v] = 1;
    printf("%d ", v);

    for (int i = 0; i < V; i++) {
        if (graph[v][i] && !visited[i]) {
            DFS(graph, visited, i);
        }
    }
}

int main() {
    int graph[V][V] = {
        {0, 1, 0, 0, 1},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 1, 1},
        {0, 1, 1, 0, 0},
        {1, 0, 1, 0, 0}
    };
    int visited[V] = {0};

    printf("DFS starting from vertex 0: ");
    DFS(graph, visited, 0);

    return 0;
}
