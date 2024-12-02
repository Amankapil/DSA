#include <bits/stdc++.h>
using namespace std;

void botuminsert(stack<int> st, int ele)
{
    if (st.empty())
    {
        st.push(ele);
        return;
    }
    int topele = st.top();
    st.pop();
    botuminsert(st, ele);

    st.push(topele);
}
void reverstack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int ele = st.top();
    st.pop();
    reverstack(st);
    botuminsert(st, ele);
}