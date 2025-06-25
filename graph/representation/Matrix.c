#include <stdio.h>
#include <stdlib.h>


// says we got a graph like this:
// A → B
// A → C
// B → C
// C → A

// if we map 
// // A → 0
// B → 1
// C → 2
// then we got (0 → 1), (0 → 2), (1 → 2), (2 → 0)



// adjacency matrix representation
void fnDisplayMatrix(int **adjacency_matrix, int n) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", adjacency_matrix[i][j]);
        }
        printf("\n");
    }
}

void fnAddEdge(int **adjacency_matrix, int iSrc, int iDest) {
    adjacency_matrix[iSrc][iDest] = 1; // Assuming directed graph
    // if its a undirected graph, also set the reverse edge
    // adjacency_matrix[iDest][iSrc] = 1;
}

void fnMatrixRepresentation(int iVertices) {
    int **adjacency_matrix = (int **)malloc(iVertices * sizeof(int *));
    
    // Allocate memory for each row
    for (int i = 0; i < iVertices; i++) {
        adjacency_matrix[i] = (int *)malloc(iVertices * sizeof(int));
    }

    // Initialize the adjacency matrix with 0s
    for (int i = 0; i < iVertices; i++) {
        for (int j = 0; j < iVertices; j++) {
            adjacency_matrix[i][j] = 0;
        }
    }
    

    // Add edges
    fnAddEdge(adjacency_matrix, 0, 1); // A → B
    fnAddEdge(adjacency_matrix, 0, 2); // A → C
    fnAddEdge(adjacency_matrix, 1, 2); // B → C
    fnAddEdge(adjacency_matrix, 2, 0); // C → A

    // Display the adjacency matrix
    fnDisplayMatrix(adjacency_matrix, iVertices);

    // Free allocated memory
    for (int i = 0; i < iVertices; i++) {
        free(adjacency_matrix[i]);
    }
    free(adjacency_matrix);
}

int main() {
    int n = 3; // Number of vertices (A, B, C)
    fnMatrixRepresentation(n);
    return 0;
}
