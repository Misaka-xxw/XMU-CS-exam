# P002 前缀和试炼之子矩阵的和

- 比赛：校外实训（二）-大三实习（蔡炳跃）班
- 题型：OI
- 难度：Mid
- 语言：C, C++, Java, Python3

## 题目描述

<p style="margin-left: 0px;">输入一个n行m列的整数矩阵，再输入q个询问，每个询问包含四个整数x1, y1, x2, y2，表示一个子矩阵的左上角坐标和右下角坐标。</p><p>对于每个询问输出子矩阵中所有数的和。</p><p><span style="color: rgb(227, 55, 55);">数据范围：</span></p><p><span style="color: rgb(227, 55, 55);">1≤n,m≤1000,</span><span style="color: rgb(227, 55, 55);">1≤q≤200000,</span></p><p><span style="color: rgb(227, 55, 55);">1≤x1≤x2≤n,</span><span style="color: rgb(227, 55, 55);">1≤y1≤y2≤m,</span></p><p><span style="color: rgb(227, 55, 55);">−1000≤矩阵内元素的值≤1000</span></p>

## 输入描述

<p>第一行包含三个整数n，m，q。</p><p>接下来n行，每行包含m个整数，表示整数矩阵。</p><p>接下来q行，每行包含四个整数x1, y1, x2, y2，表示一组询问。</p>

## 输出描述

<p><span style="color: rgb(51, 51, 51);">共q行，每行输出一个询问的结果。</span><br /></p>

## 样例

### 样例 1

#### 输入

```text
3 4 3
1 7 2 4
3 6 2 8
2 1 2 3
1 1 2 2
2 1 3 4
1 3 3 4
```

#### 输出

```text
17
27
21
```

## 提示

<p><a href="https://www.acwing.com/video/239/" target="_blank">Y总讲解</a></p><p><a href="https://www.acwing.com/solution/content/3797/" target="_blank">参考题解</a></p><p></p><p><a href="https://www.acwing.com/activity/content/code/content/39797/" target="_blank">Y总代码</a></p>
