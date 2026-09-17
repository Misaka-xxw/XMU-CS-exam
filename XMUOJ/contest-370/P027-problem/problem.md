# P027 画图

- 比赛：校外实训（二）-大三实习（蔡炳跃）班
- 题型：OI
- 难度：Mid
- 语言：C, C++, Java, Python3

## 题目描述

<p style="margin-left: 0px;">用 ASCII 字符来画图是一件有趣的事情，并形成了一门被称为 ASCII Art 的艺术。</p><p>例如，下图是用 ASCII 字符画出来的 CSPRO 字样。</p><pre><code style="font-family: Menlo, Monaco, Consolas, &quot;Courier New&quot;, monospace; font-size: inherit; padding: 0px; color: inherit; background: transparent; border-radius: 3px; margin: 0px; border: none;">　　..___<span class="hljs-number">_</span>.___<span class="hljs-number">_</span>..___<span class="hljs-number">_</span>..___<span class="hljs-number">_</span>...__<span class="hljs-number">_</span>..
　　./.__<span class="hljs-number">_</span>/.__<span class="hljs-number">_</span><span class="hljs-params">||</span>..<span class="hljs-number">_</span>.\<span class="hljs-params">|.._.\./._.\.
　　|</span>.<span class="hljs-params">|...\___.\|</span>.<span class="hljs-params">|_).|</span>.<span class="hljs-params">|_).|</span>.<span class="hljs-params">|.|</span>.<span class="hljs-params">|
　　|</span>.<span class="hljs-params">|___.___).|</span>.._<span class="hljs-number">_</span>/<span class="hljs-params">|.._.&lt;|</span>.<span class="hljs-params">|_|</span>.<span class="hljs-params">|
　　.\____|</span>___<span class="hljs-number">_</span>/<span class="hljs-params">|_|</span>...<span class="hljs-params">|_|</span>.\<span class="hljs-number">_</span>\\__<span class="hljs-number">_</span>/.
</code></pre><p>本题要求编程实现一个用 ASCII 字符来画图的程序，支持以下两种操作：</p><ul><li>画线：给出两个端点的坐标，画一条连接这两个端点的线段。简便起见题目保证要画的每条线段都是水平或者竖直的。水平线段用字符<code>-</code>来画，竖直线段用字符<code>|</code>来画。如果一条水平线段和一条竖直线段在某个位置相交，则相交位置用字符<code>+</code>代替。</li><li>填充：给出填充的起始位置坐标和需要填充的字符，从起始位置开始，用该字符填充相邻位置，直到遇到画布边缘或已经画好的线段。注意这里的相邻位置只需要考虑上下左右4个方向，如下图所示，字符<code>@</code>只和4个字符<code>*</code>相邻。</li></ul><pre><code style="font-family: Menlo, Monaco, Consolas, &quot;Courier New&quot;, monospace; font-size: inherit; padding: 0px; color: inherit; background: transparent; border-radius: 3px; margin: 0px; border: none;">　　.*.
　　<span class="hljs-emphasis" style="font-style: italic;">*@*</span>
　　.*.</code></pre>

## 输入描述

<p>第1行有三个整数m,n和q。m和n分别表示画布的宽度和高度，以字符为单位。q表示画图操作的个数。</p><p>第2行至第q+1行，每行是以下两种形式之一：</p><ul><li><code>0 x1 y1 x2 y2</code>：表示画线段的操作，(x1,y1)和(x2,y2)分别是线段的两端，满足要么x1=x2且y1≠y2，要么y1=y2且x1≠x2。</li><li><code>1 x y c</code>：表示填充操作，(x,y)是起始位置，保证不会落在任何已有的线段上；c为填充字符，是大小写字母。</li></ul><p>画布的左下角是坐标为(0,0)的位置，向右为x坐标增大的方向，向上为y坐标增大的方向。</p><p>这q个操作按照数据给出的顺序依次执行。画布最初时所有位置都是字符<code>.</code>（小数点）。</p>

## 输出描述

<p>输出有n行，每行m个字符，表示依次执行这q个操作后得到的画图结果。<br /></p><p><br /></p><h4><b>数据范围</b></h4><p>2≤m,n≤100，<br />0≤q≤100，<br />0≤x&lt;m（x表示输入数据中所有位置的x坐标），<br />0≤y&lt;n（y表示输入数据中所有位置的y坐标）。</p>

## 样例

### 样例 1

#### 输入

```text
4 2 3
1 0 0 B
0 1 0 2 0
1 0 0 A
```

#### 输出

```text
AAAA
A--A
```

### 样例 2

#### 输入

```text
16 13 9
0 3 1 12 1
0 12 1 12 3
0 12 3 6 3
0 6 3 6 9
0 6 9 12 9
0 12 9 12 11
0 12 11 3 11
0 3 11 3 1
1 4 2 C
```

#### 输出

```text
................
...+--------+...
...|CCCCCCCC|...
...|CC+-----+...
...|CC|.........
...|CC|.........
...|CC|.........
...|CC|.........
...|CC|.........
...|CC+-----+...
...|CCCCCCCC|...
...+--------+...
................
```

## 提示

<p>这是一道关于ASCII艺术绘图的模拟题。需要实现画线和填充两种操作，注意坐标系的转换。</p><p><a href="https://www.acwing.com/video/2462/" target="_blank">Y总讲解</a></p><p><a href="https://www.acwing.com/activity/content/code/content/8113351/" target="_blank">Y总代码</a></p>
