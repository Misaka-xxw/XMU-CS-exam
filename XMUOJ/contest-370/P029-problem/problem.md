# P029 并查集试炼之合并集合

- 比赛：校外实训（二）-大三实习（蔡炳跃）班
- 题型：OI
- 难度：Mid
- 语言：C, C++, Java, Python3

## 题目描述

<p style="margin-left: 0px;">一共有n个数，编号是1~n，最开始每个数各自在一个集合中。</p><p>现在要进行m个操作，操作共有两种：</p><ol><li>“M a b”，将编号为a和b的两个数所在的集合合并，如果两个数已经在同一个集合中，则忽略这个操作；</li><li>“Q a b”，询问编号为a和b的两个数是否在同一个集合中；</li></ol><p><span style="color: rgb(227, 55, 55);">数据范围：1≤n,m≤10^5</span></p>

## 输入描述

<p>第一行输入整数n和m。</p><p>接下来m行，每行包含一个操作指令，指令为“M a b”或“Q a b”中的一种。</p>

## 输出描述

<p>对于每个询问指令”Q a b”，都要输出一个结果，如果a和b在同一集合内，则输出“Yes”，否则输出“No”。</p><p>每个结果占一行。</p>

## 样例

### 样例 1

#### 输入

```text
4 5
M 1 2
M 3 4
Q 1 2
Q 1 3
Q 3 4
```

#### 输出

```text
Yes
No
Yes
```

## 提示

<p><a href="https://www.acwing.com/problem/content/838/" target="_blank">原题链接</a></p><p><a href="https://www.acwing.com/activity/content/code/content/8124511/" target="_blank">Y总代码</a></p><p><a href="https://www.acwing.com/video/261/" target="_blank">Y总讲解</a></p>
