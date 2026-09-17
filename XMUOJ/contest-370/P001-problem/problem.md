# P001 前缀和试炼之何为前缀和

- 比赛：校外实训（二）-大三实习（蔡炳跃）班
- 题型：OI
- 难度：Low
- 语言：C, C++, Java, Python3

## 题目描述

<p style="margin-left: 0px;">输入一个长度为n的整数序列。</p><p>接下来再输入m个询问，每个询问输入一对l, r。</p><p>对于每个询问，输出原序列中从第l个数到第r个数的和。</p><p><br /></p><p><span style="color: rgb(227, 55, 55);">数据范围：</span></p><p><span style="color: rgb(227, 55, 55);">1≤l≤r≤n ,</span></p><p><span style="color: rgb(227, 55, 55);">1≤n,m≤100000,</span></p><p><span style="color: rgb(227, 55, 55);">−1000≤数列中元素的值≤1000</span></p>

## 输入描述

<p>第一行包含两个整数n和m。</p><p>第二行包含n个整数，表示整数数列。</p><p>接下来m行，每行包含两个整数l和r，表示一个询问的区间范围。</p>

## 输出描述

<p><span style="color: rgb(51, 51, 51);">共m行，每行输出一个询问的结果。</span><br /></p>

## 样例

### 样例 1

#### 输入

```text
5 3
2 1 3 6 4
1 2
1 3
2 4
```

#### 输出

```text
3
6
10
```

## 提示

<p><a href="https://www.acwing.com/problem/content/797/" target="_blank">原题链接</a></p><p><a href="https://www.acwing.com/solution/content/27238/" target="_blank">参考题解</a></p><p><a href="https://www.acwing.com/video/238/" target="_blank">Y总讲解</a></p><p><a href="https://www.acwing.com/activity/content/code/content/39796/" target="_blank">Y总代码</a></p>
