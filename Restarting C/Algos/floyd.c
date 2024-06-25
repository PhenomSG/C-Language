#include<stdio.h>
#include<math.h>

#define MAX 5
#define INF 9999

int min(int a, int b);

void floyd(int p[MAX][MAX], int n) {
    int i, j, k;
    for (k = 0; k < n; k++)
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                p[i][j] = min(p[i][j], p[i][k] + p[k][j]);
}

int min(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

void printMatrix(int p[MAX][MAX], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", p[i][j]);
        printf("\n");
    }
}

int main() {
    int p[MAX][MAX] = {
        {0, 4, INF, 5, INF},
        {INF, 0, 1, INF, 6},
        {2, INF, 0, 3, INF},
        {INF, INF, 1, 0, 2},
        {1, INF, INF, 4, 0}
    };

    int n = MAX;
    // printf("%d",n); --> 4
    
    printf("\n Matrix of input data: \n");
    printMatrix(p, n);

    floyd(p, n);

    printf("\n Transitive closure: \n");
    printMatrix(p, n);

    return 0;
}
