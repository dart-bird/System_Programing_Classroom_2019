Write code to check whether the graph has an Eulerian path.

The conditions for the Eulerian path to exist are as follows:
In order for a graph G to have an Eulerian path, if and only if graph G is a connected graph and the number of vertices that has odd degree must be zero or two.

Eulerian path: https://en.wikipedia.org/wiki/Eulerian_path 

=====

그래프에 오일러 경로가 존재하는지 확인할 수 있는 코드를 작성하시오.

오일러 경로가 존재하기 위한 조건은 다음과 같다.

어떤 그래프 G가 오일러 경로를 가지기 위한 필요충분 조건은 G가 연결그래프이고, 홀수 차수인 정점의 개수가 0개 또는 2개여야 한다.
오일러경로:  https://ko.wikipedia.org/wiki/한붓그리기

input: 8 (1,2) (1,3) (1,4) (2,3) (2,4) (3,4) (3,5) (4,6) (5,6) (5,7) (5,8) (6,7) (6,8) END

output: True