# P024 生日蛋糕

- 比赛：校外实训（二）-大三实习（蔡炳跃）班
- 题型：OI
- 难度：Mid
- 语言：C, C++, Java, Python3

## 题目描述

<p>7月17日是Mr.W的生日，ACM-THU为此要制作一个体积为Nπ的M层生日蛋糕，每层都是一个圆柱体。</p><p>设从下往上数第i层蛋糕是半径为Ri，高度为Hi的圆柱。</p><p>当i&lt;M时，要求Ri&gt;Ri+1且Hi&gt;Hi+1。</p><p>由于要在蛋糕上抹奶油，为尽可能节约经费，我们希望蛋糕外表面（最下一层的下底面除外）的面积Q最小。</p><p>令Q=Sπ，请编程对给出的N和M，找出蛋糕的制作方案（适当的Ri和Hi的值），使S最小。</p><p>除Q外，以上所有数据皆为正整数。</p>

## 输入描述

<p>输入包含两行，第一行为整数N，表示待制作的蛋糕的体积为Nπ。</p><p>第二行为整数M，表示蛋糕的层数为M。</p>

## 输出描述

<p>输出仅一行，是一个正整数S（若无解则S=0）。</p><p style="margin-left: 0px;"><b>数据范围</b></p><p>1 ≤ N ≤ 10000，</p><p>1 ≤ M ≤ 20</p>

## 样例

### 样例 1

#### 输入

```text
100
2
```

#### 输出

```text
68
```

## 提示

<p><a href="https://www.acwing.com/video/69/" target="_blank">Y总讲解</a></p><p><a href="https://www.acwing.com/activity/content/code/content/8066754/" target="_blank">Y总代码</a></p>
