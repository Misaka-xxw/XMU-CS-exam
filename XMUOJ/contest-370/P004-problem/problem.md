# P004 差分试炼之何为差分

- 比赛：校外实训（二）-大三实习（蔡炳跃）班
- 题型：OI
- 难度：Mid
- 语言：C, C++, Java, Python3

## 题目描述

<p style="margin-left: 0px;">输入一个长度为n的整数序列。</p><p>接下来输入m个操作，每个操作包含三个整数l, r, c，表示将序列中[l, r]之间的每个数加上c。</p><p>请你输出进行完所有操作后的序列。</p><p><span style="color: rgb(227, 55, 55);">数据范围：</span></p><p><span style="color: rgb(227, 55, 55);">1≤n,m≤100000 ,</span></p><p><span style="color: rgb(227, 55, 55);">1≤l≤r≤n,</span></p><p><span style="color: rgb(227, 55, 55);">−1000≤c≤1000,</span></p><p><span style="color: rgb(227, 55, 55);">−1000≤整数序列中元素的值≤1000</span></p>

## 输入描述

<p>第一行包含两个整数n和m。</p><p>第二行包含n个整数，表示整数序列。</p><p>接下来m行，每行包含三个整数l，r，c，表示一个操作。</p>

## 输出描述

<p><span style="color: rgb(51, 51, 51);">共一行，包含n个整数，表示最终序列。</span><br /></p>

## 样例

### 样例 1

#### 输入

```text
6 3
1 2 2 1 2 1
1 3 1
3 5 1
1 6 1
```

#### 输出

```text
3 4 5 3 4 2
```

## 提示

<p><a href="https://www.acwing.com/problem/content/799/" target="_blank">原题链接</a></p>
