#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n, **adjMat;
  scanf("%d", &n);  // |V| = n
  
  // make adjavency matrix
  adjMat = (int**)malloc(sizeof(int*)*n);
  for(int i=0; i<n; i++){
    adjMat[i] = (int*)malloc(sizeof(int)*n);
  }

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      printf("%d",adjMat[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}