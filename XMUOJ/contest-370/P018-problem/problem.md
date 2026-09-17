# P018 递归试炼之分形之城

- 比赛：校外实训（二）-大三实习（蔡炳跃）班
- 题型：OI
- 难度：High
- 语言：C, C++, Java, Python3

## 题目描述

<p style="margin-left: 0px;">城市的规划在城市建设中是个大问题。</p><p>不幸的是，很多城市在开始建设的时候并没有很好的规划，城市规模扩大之后规划不合理的问题就开始显现。</p><p>而这座名为 Fractal 的城市设想了这样的一个规划方案，如下图所示：</p><p><img alt="city.png" src="https://www.acwing.com/media/article/image/2019/01/07/19_1ac25efe11-city.png" /></p><p>当城区规模扩大之后，Fractal 的解决方案是把和原来城区结构一样的区域按照图中的方式建设在城市周围，提升城市的等级。</p><p>对于任意等级的城市，我们把正方形街区从左上角开始按照道路标号。</p><p>虽然这个方案很烂，Fractal 规划部门的人员还是想知道，如果城市发展到了等级NN，编号为AA和BB的两个街区的直线距离是多少。</p><p>街区的距离指的是街区的中心点之间的距离，每个街区都是边长为1010米的正方形。</p>

## 输入描述

<p>第一行输入正整数nn，表示测试数据的数目。</p><p>以下nn行，输入nn组测试数据，每组一行。</p><p>每组数据包括三个整数N,A,BN,A,B，表示城市等级以及两个街区的编号，整数之间用空格隔开。</p>

## 输出描述

<p><span style="color: rgb(51, 51, 51);">一共输出</span><span style="color: rgb(51, 51, 51);">nn</span><span style="color: rgb(51, 51, 51);">行数据，每行对应一组测试数据的输出结果，结果四舍五入到整数。</span><br /></p><p><span style="color: rgb(51, 51, 51);"><img alt="image.png" src="/public/upload/91673e0436.png" width="169" height="113" /><br /></span></p>

## 样例

### 样例 1

#### 输入

```text
3
1 1 2
2 16 1
3 4 33
```

#### 输出

```text
10
30
50
```

### 样例 2

#### 输入

```text
10
3 62 11
5 252 21
3 57 27
3 32 47
3 46 56
3 21 42
5 802 297
5 507 802
5 403 555
3 53 35

```

#### 输出

```text
36
92
63
30
32
61
228
136
152
20

```

## 提示

<p><span style="color: rgb(51, 51, 51);">来源：《算法竞赛进阶指南》</span><br /></p><p><span style="color: rgb(51, 51, 51);"><a href="https://www.acwing.com/solution/content/16524/" target="_blank">参考题解</a></span></p><p><a href="https://www.acwing.com/video/117/" target="_blank">Y总讲解</a></p>
