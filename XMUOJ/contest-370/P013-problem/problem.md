# P013 牛的基因学

- 比赛：校外实训（二）-大三实习（蔡炳跃）班
- 题型：OI
- 难度：Mid
- 语言：C, C++, Java, Python3

## 题目描述

<p>贝茜直在研究基因学，着迷于DNA序列对。</p><p>DNA序列符串是指包含字符<code>A</code>、<code>C</code>、<code>G</code>、<code>T</code>组成的字符串。</p><p>设字符串s和t是两个长度为n的DNA序列字符串。</p><p>将函数h(s,t)定义为完全符合s和t中，字符相同的位置数量。</p><p>利用函数h(s,t)进一步定义DNA距离函数p(s,t)：</p><p>$$p(s,t) = \sum_{i=0}^{t-1} \sum_{j=0}^{t-1} h(shift(s, i), shift(t, j))$$</p><p>其中，shift(s,i)表示将字符串s循环左移i位后得到的字符串。</p><p>例如：</p><p>p(&quot;TCG&quot;, &quot;GCA&quot;) =<br />h(&quot;TCG&quot;, &quot;GCA&quot;) + h(&quot;TCG&quot;, &quot;CAG&quot;) + h(&quot;TCG&quot;, &quot;AGC&quot;) +<br />h(&quot;CGT&quot;, &quot;GCA&quot;) + h(&quot;CGT&quot;, &quot;CAG&quot;) + h(&quot;CGT&quot;, &quot;AGC&quot;) +<br />h(&quot;GTC&quot;, &quot;GCA&quot;) + h(&quot;GTC&quot;, &quot;CAG&quot;) + h(&quot;GTC&quot;, &quot;AGC&quot;) =<br />1 + 1 + 0 + 0 + 1 + 1 + 1 + 0 + 1 = 6</p><p>现在，给定一个长度为n的DNA序列字符串s，请你统计一共有多少个长度为n的DNA序列字符串t满足：</p><p>更准确地说，请你计算一共有多少个长度为n的DNA序列字符串t满足：$p(s, t) = \max_{u\in\{A,C,G,T\}^n} p(s, u)$。</p><p>由于结果可能很大，你只需要输出$10^9 + 7$取模后的结果。</p>

## 输入描述

<p>第一行包含整数n。</p><p>第二行包含一个长度为n的由字符<code>A</code>、<code>C</code>、<code>G</code>、<code>T</code>组成的字符串，表示字符串s。</p>

## 输出描述

<p>一个整数，表示对$10^9 + 7$取模后的结果。</p><p><br /></p><p style="margin-left: 0px;">前3个测试点满足$1 ≤ n ≤ 3$。</p><p>所有测试点满足$1 ≤ n ≤ 10^5$。</p>

## 样例

### 样例 1

#### 输入

```text
1
C
```

#### 输出

```text
1
```

### 样例 2

#### 输入

```text
2
AG
```

#### 输出

```text
4
```

### 样例 3

#### 输入

```text
3
TTT
```

#### 输出

```text
1
```

## 提示

<p><a href="https://www.acwing.com/activity/content/problem/content/9742/" target="_blank">原题链接</a></p><p><a href="https://www.acwing.com/video/5062/" target="_blank">Y总讲解</a></p>
