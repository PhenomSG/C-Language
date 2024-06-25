#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define TRUE 1
#define FALSE 0

void insertEdge(int graph[MAX][MAX], int u, int v);
void deleteEdge(int graph[MAX][MAX], int u, int v);
int searchEdge(int graph[MAX][MAX], int u, int v);
void BFS(int graph[MAX][MAX], int start);
void DFS(int graph[MAX][MAX], int start);
void DFSUtil(int graph[MAX][MAX], int start,
             int visited[MAX]);

int main()
{
    // initalised with all zero
    int graph[MAX][MAX] = {0};

    // edge insertion
    insertEdge(graph, 0, 1);
    insertEdge(graph, 0, 2);
    insertEdge(graph, 1, 2);
    insertEdge(graph, 2, 0);
    insertEdge(graph, 2, 3);

    // Traversal

    // breadth first search
    printf("BFS Traversal starting from 2 \n");
    BFS(graph, 2);

    // depth first search
    printf("DFS Traversal starting from 2 \n");
    DFS(graph, 2);

    return 0;
}

// insert edge function
void insertEdge(int graph[MAX][MAX], int u, int v)
{
    // undirected graph
    graph[u][v] = 1;
    // opposite also 1
    graph[v][u] = 1;
}

// BFS Traversal
void BFS(int graph[MAX][MAX], int start)
{
    // visited and non-visited(queue)
    int visited[MAX] = {0};
    int queue[MAX];
    int front = 0, rear = 0;

    // start node is visited
    visited[start] = TRUE;
    queue[rear++] = start;

    while (front < rear){
        int curr = queue[front++];
        printf("%d",curr);

        // adjacent nodes
        for (int i = 0; i < MAX; i++)
        {
            if (graph[curr][i] == 1 && !visited[i])
            {
                visited[i] = TRUE;
                queue[rear++] = i;    
            }
        }
        printf("\n");
    }
}












