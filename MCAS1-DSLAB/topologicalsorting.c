#include <stdio.h>

#define MAX 100  // Maximum number of vertices

int graph[MAX][MAX];  // Adjacency matrix
int visited[MAX];     // Visited array
int n;                // Number of vertices

// ---------------------------
// Function: dfs()
// Performs recursive Depth-First Search traversal
// ---------------------------
void dfs(int v) {
    visited[v] = 1;            // Mark current vertex as visited
    printf("%d ", v);          // Print current vertex

    // Visit all adjacent vertices
    for (int i = 0; i < n; i++) {
        if (graph[v][i] && !visited[i]) {
            dfs(i);
        }
    }
}

// ---------------------------
// Function: main()
// Reads adjacency matrix and calls DFS
// ---------------------------
int main() {
    int startVertex;

    // Step 1: Input number of vertices
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    // Step 2: Input adjacency matrix
    printf("\nEnter the adjacency matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Step 3: Initialize visited array
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // Step 4: Input starting vertex
    printf("\nEnter the starting vertex for DFS: ");
    scanf("%d", &startVertex);

    if (startVertex < 0 || startVertex >= n) {
        printf("Invalid starting vertex.\n");
        return 1;
    }

    // Step 5: Perform DFS
    printf("\nDFS Traversal starting from vertex %d:\n", startVertex);
    dfs(startVertex);

    printf("\n");
    return 0;
}
