#include <stdio.h>
#include "tree.c"

int main(void) {
  
  int size;
  scanf("%d", &size);
  tree* root = NULL;
  for(int i = 0; i<size; i++){
    int data;
    scanf("%d", &data);
    
    if(root != NULL) insert_node(root, data);
    else root = initialize(data);
  }
  
  preorder(root);
  
  return 0;
}