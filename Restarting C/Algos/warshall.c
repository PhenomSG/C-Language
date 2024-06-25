#include<stdio.h>
#include<math.h>

#define MAX 4

int max(int a, int b);

void warshal(int p[MAX][MAX], int n) {
    int i, j, k;
    for (k = 0; k < n; k++)
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                p[i][j] = max(p[i][j], p[i][k] && p[k][j]);
}
int max(int a, int b) {
    if (a > b)
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
        {0, 1, 0, 0},
        {0, 0, 0, 1},
        {0, 0, 0, 0},
        {1, 0, 1, 0}
    };
    int n = MAX;

    printf("\n Matrix of input data: \n");
    printMatrix(p, n);

    warshal(p, n);

    printf("\n Transitive closure: \n");
    printMatrix(p, n);

    return 0;
}
