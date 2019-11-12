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
  int ref_cnt = 0;
  int sym_cnt = 0;
  int tran_cnt = 0;
  int s_pos = 1;
  int y_pos = 0;
    for (int i = 0; i < arraySize; i++){
      for (int j = 0; j < arraySize; j++){
        if(i == j && rMatrix[i][j]) ref_cnt++;
        if(rMatrix[i][j] == rMatrix[j][i]) sym_cnt++;
        
        if(i==0 && j==0 && s_pos && rMatrix[i][j]) {y_pos = j; s_pos = 0; continue;}
        if(s_pos && rMatrix[i][j]) {y_pos = j; s_pos = 0; continue;}
        if(!s_pos && rMatrix[i][j] && (i==y_pos)) {y_pos = j; s_pos = 1;}
        if(i!=y_pos) tran_cnt = -1; 
      }
    }
    if (ref_cnt == arraySize) printf("reflexive,");
    else printf("irreflexive, ");

    if (sym_cnt == arraySize) printf("symmetric, ");
    else printf("asymmetric, ");

    if (sym_cnt == -1) printf("transitive");
    else printf("intransitive");
  
  // your codes here
  
  return 0;
}