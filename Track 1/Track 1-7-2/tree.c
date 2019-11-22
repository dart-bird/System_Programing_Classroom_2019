#include "tree.h"

tree* initialize(int data){
  tree* node = (tree*)malloc(sizeof(tree));
  node -> leftchild = NULL;
  node -> rightchild = NULL;
  node -> data = data;
  return node;
}

int isLeaf(tree* curNode, int direction){
  if(direction < 0) return curNode -> leftchild == NULL?1:0;
  else return curNode -> rightchild  == NULL?1:0;
  
}

void insert_node(tree* curNode, int data){
    if(curNode -> data > data) 
      if(isLeaf(curNode, -1)) curNode->leftchild = initialize(data);
      else insert_node(curNode->leftchild, data);
    else if(curNode -> data < data)
      if(isLeaf(curNode, +1)) curNode->rightchild= initialize(data);
      else insert_node(curNode->rightchild, data);
    else printf("duplicated\n");
}

void preorder(tree* curNode){
  if(curNode != NULL){
    printf("%d ",curNode -> data);
    preorder(curNode -> leftchild);
    preorder(curNode -> rightchild);
  }
}