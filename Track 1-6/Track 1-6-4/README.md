Write the code to search the given graph based on the breadth first search algorithm.

Input is received in unordered pairs.

ex) (1,2) (1,3) (2,4) ...

All graphs start from 1.

Print the results of search as follows:

1-2-4-8-...

graph: https://en.wikipedia.org/wiki/Graph_(abstract_data_type)
dfs: https://en.wikipedia.org/wiki/Breadth-first_search

void bfs(int v){
  int w;
  extern struct queue *q;
  VISITED[v] = 1;
  initialize(q);
  enqueue(v, q);
  while(!empty(q)){
    v=dequeue(q);
    for(each vertex w adjacent to v){
      enqueue(w, q);
      VISITED[w] = 1;
    }
  }
}

=====

다음 breadth first search 알고리즘을 바탕으로 주어진 그래프를 탐색하는 코드를 작성하시오.

입력은 순서가 없는 쌍 형태로 받게됨.

예) (1,2) (1,3) (2,4) ...

모든 그래프는 1에서 시작함.

탐색한 결과를 다음과 같이 출력하시오.

1-2-4-8-...

graph: https://ko.wikipedia.org/wiki/그래프_(자료_구조)
dfs: https://ko.wikipedia.org/wiki/너비_우선_탐색

void bfs(int v){
  int w;
  extern struct queue *q;
  VISITED[v] = 1;
  initialize(q);
  enqueue(v, q);
  while(!empty(q)){
    v=dequeue(q);
    for(v와 인접한 모든 정점 w에 대하여){
      enqueue(w, q);
      VISITED[w] = 1;
    }
  }
}
