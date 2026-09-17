# P016 正则问题

- 比赛：校外实训（二）-大三实习（蔡炳跃）班
- 题型：OI
- 难度：Mid
- 语言：C, C++, Java, Python3

## 题目描述

<p>考虑一种简单的正则表达式：</p><p>只由 x ( ) | 组成的正则表达式。</p><p>小明想求出这个正则表达式能接受的最长字符串的长度。</p><p>例如 ((x|xxx)x|(x|xx))xx 能接受的最长字符串是：xxxxxx，长度是6。</p>

## 输入描述

<p>一个由x()| 组成的正则表达式。</p><p><span style="color: rgb(51, 51, 51);"><b>数据范围：</b></span></p><p><span style="color: rgb(51, 51, 51);">输入长度不超过100，保证合法。</span><br /></p>

## 输出描述

<p>输出所给正则表达式能接受的最长字符串的长度。</p>

## 样例

### 样例 1

#### 输入

```text
((x|xxx)x|(x|xx))xx
```

#### 输出

```text
6
```

## 提示

<p><a href="https://www.acwing.com/video/768/" target="_blank">Y总讲解</a></p><p><a href="https://www.acwing.com/activity/content/code/content/8041032/" target="_blank">参考题解</a></p>
