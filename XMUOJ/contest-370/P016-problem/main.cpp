#include <bits/stdc++.h>
using namespace std;
#define Default 0
#define Left_quote -1
#define Or -2
stack<int> st;
void cal()
{
    int ret = 0;
    while (!st.empty())
    {
        int last = st.top();
        st.pop();
        if (last == Left_quote)
        {
            break;
        }
        else if (last > 0)
        {
            ret = max(ret, last);
        }
    }
    if (!st.empty() && st.top() > 0)
    {
        int last = st.top();
        st.pop();
        st.push(ret + last);
    }
    else
    {
        st.push(ret);
    }
}
int main()
{
    string s;
    cin >> s;
    for (auto &c : s)
    {
        int last;
        switch (c)
        {
        case 'x':
            if (st.empty())
            {
                st.push(1);
            }
            else
            {
                last = st.top();
                if (last > 0) // x
                {
                    st.pop();
                    st.push(last + 1);
                }
                else
                {
                    st.push(1);
                }
            }
            break;
        case '|':
            st.push(Or);
            break;
        case '(':
            st.push(Left_quote);
            break;
        case ')':
            cal();
            break;
        default:
            break;
        }
    }
    cal();
    cout << st.top() << endl;
    return 0;
}
/*
只有x、|、（）组成的正则表达式
((x|xxx)x|(x|xx))xx
*/