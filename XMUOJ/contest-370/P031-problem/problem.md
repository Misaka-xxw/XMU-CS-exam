# P031 格子游戏

- 比赛：校外实训（二）-大三实习（蔡炳跃）班
- 题型：OI
- 难度：Mid
- 语言：C, C++, Java, Python3

## 题目描述

<p>Alice和Bob玩了一个古老的游戏：首先画一个 n×n 的点阵（下图 n=3 ）。</p><p style="margin-left: 0px;">接着，他们两个轮流在相邻的点之间画上红边和蓝边：</p><p><img alt="1.png" src="https://cdn.acwing.com/media/article/image/2019/12/11/19_9edbcf521b-1.png" /></p><p></p><p></p><p>直到围成一个封闭的圈（面积不必为 1）为止，“封圈”的那个人就是赢家。</p><p>因为棋盘实在是太大了，他们的游戏实在是太长了！</p><p>他们甚至在游戏中都不知道谁赢得了游戏。</p><p>于是请你写一个程序，帮助他们计算他们是否结束了游戏？</p>

## 输入描述

<p>输入数据第一行为两个整数 n 和 m。n表示点阵的大小，m 表示一共画了 m 条线。</p><p>以后 m 行，每行首先有两个数字 (x,y)，代表了画线的起点坐标，接着用空格隔开一个字符，假如字符是 D，则是向下连一条边，如果是 R 就是向右连一条边。</p><p>输入数据不会有重复的边且保证正确。</p>

## 输出描述

<p>输出一行：在第几步的时候结束。</p><p>假如 m 步之后也没有结束，则输出一行“draw”。</p><p><b>数据范围</b></p><p>1≤n≤200，1≤m≤24000</p>

## 样例

### 样例 1

#### 输入

```text
3 5
1 1 D
1 1 R
1 2 D
2 1 R
2 2 D

```

#### 输出

```text
4

```

## 提示

<p><a href="https://www.acwing.com/problem/content/1252/" target="_blank">原题链接</a></p><p><a href="https://www.acwing.com/video/612/" target="_blank">Y总讲解</a></p><p><a href="https://www.acwing.com/solution/content/133362/" target="_blank">参考题解</a></p><p><a href="https://www.acwing.com/activity/content/code/content/161716/" target="_blank">Y总代码</a></p>
