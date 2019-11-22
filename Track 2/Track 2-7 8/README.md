Implement an 8-puzzle game.

The 8-puzzle game is a game where you move an adjacent number to an empty space in a 3 x 3 box to make it a target.

Each section of the puzzle contains numbers from 0 to 8.

In our case, 0 means empty space.

Numbers from 0 to 8 are randomly entered, and fill in (0,0), (0,1), ..., (2,2) digits according to the input order.

For example, the input might come in:

2 8 3 1 6 4 7 0 5

Moving this to a box, we can write

2 8 3
1 6 4
7 0 5

If you move 6 down, the puzzle will changed to:

2 8 3
1 0 4
7 6 5

Repeat these movements to make the target state as shown below and the game ends.

1 2 3
8 0 4
7 6 5

The process of creating the target state should be printed step by step.

hint: simulate each steps using tree structure.
https://blog.goodaudience.com/solving-8-puzzle-using-a-algorithm-7b509c331288 

=====

8-puzzle 게임을 구현하시오.

8-puzzle 게임은 3 x 3 크기의 박스 안에서 인접한 숫자를 빈 곳으로 움직여 목표 상태로 만드는 게임이다.

퍼즐의 각 칸에는 0부터 8까지 숫자가 들어간다.

이때 0은 빈 곳을 의미한다.

0부터 8까지 숫자가 무작위로 입력되고, 입력 순서에 따라 (0,0), (0,1), ..., (2,2) 자리를 채우게 된다.

예를 들어 다음과 같이 입력이 들어올 수 있다.

2 8 3 1 6 4 7 0 5

이 것을 박스로 옮기면 다음과 같이 나타낼 수 있다.

2 8 3
1 6 4
7 0 5 

6을 아래로 한 칸 내리면 퍼즐은 다음과 같이 바뀐다.

2 8 3
1 0 4
7 6 5

이런 움직임을 반복하여 아래와 같이 목표 상태를 만들면 게임이 종료된다.

1 2 3
8 0 4
7 6 5

목표상태를 만드는 과정을 단계별로 출력해야 한다.

 https://blog.goodaudience.com/solving-8-puzzle-using-a-algorithm-7b509c331288 