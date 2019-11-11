#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  
  int arraySize;
  scanf("%d", &arraySize);
  
  // make relational matrix
  int** rMatrix = (int**)malloc(sizeof(int*) * arraySize);
  for(int i=0; i<arraySize; i++){
    rMatrix[i] = (int*)calloc(arraySize, sizeof(int));
  }
  
  // take ordered pairs
  while(1){
    char pair[20];
    scanf("%s", pair);
    
    if(!strcmp(pair, "END")){
      break;
    }
    
    int xpos = atoi(strtok(pair, " (,)"));
    int ypos = atoi(strtok(NULL, " (,)"));
    
    rMatrix[xpos][ypos] = 1;
  }
  for (int i = 0; i < arraySize; i++){
    for (int j = 0; j < arraySize; j++){
      for (int d = 0; d < arraySize; d++){
        for (int k = 0; k < arraySize; k++){
          if (rMatrix[d][k] && rMatrix[j][d] && rMatrix[i][j]) printf("(%d,%d)(%d,%d)(%d,%d)\n",i,j,j,d,d,k);
        }
      }
    }
  }
  
  // your codes here

  return 0;
}