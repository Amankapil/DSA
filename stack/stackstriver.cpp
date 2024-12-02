#include <bits/stdc++.h>
using namespace std;
#define n 100
class Stack
{
public:
    int top;
    int *arr;
    Stack()
    {
        top = -1;
        arr = new int[n];
    }

    void push(int x)
    {
        top++;
        arr[top] = x;
    }

    int pop()
    {
        int x = arr[top];
        top--;
        return x;
    }
    int Top()
    {
        return arr[top];
    }
    int size()
    {
        return top + 1;
    }
};

class Queue
{
    int arr[10];
    int start, end, crr;

    Queue()
    {
        start = -1;
        end = -1;
        crr = 0;
    }

    void push(int x)
    {
        if (end == -1)
        {
            start = 0;
            end = 0;
        }
        else
        {
            end++;
            arr[end] = x;
            crr++;
        }
    }

    int pop()
    {

        int topop = arr[start];
        if (crr == 1)
        {
            start = -1;
            end = -1;
        }
        else
        {
            start++;
        }
        crr--;
        return topop;
    }

    int Top()
    {
        if (crr == 0)
        {
            cout << "Top";
            exit(1);
        }
        return arr[start];
    }
    int size()
    {
        return crr;
    }
};

// stack using queue

bool balance(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }

        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {

                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (st.top() == '{')
            {

                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (st.top() == '[')
            {

                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }
    }

    return true;
}

void bottominser(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }
    int topel = st.top();
    st.pop();

    bottominser(st, topel);

    st.push(topel);
}

void reverse(stack<int> &st)
{

    if (st.empty())
    {
        return;
    }

    int ele = st.top();
    st.pop();

    reverse(st);

    bottominser(st, ele);
}

int prifix(string s)
{
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;

            default:
                break;
            }
        }
    }

    return st.top();
}

int postfix(string s)
{
    stack<int> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;

            default:
                break;
            }
        }
    }
}

string prifixtoinfinx(string s)
{
    string str;
    stack<string> st;
    for (int i = s.length(); i >= 0; i--)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            string toprifix = "(" + op1 + s[i] + op2 + ")";
            st.push(toprifix);
        }
        else
        {
            // st.push(s[i] - '0');
            st.push(string(1, s[i]));
        }
    }

    return st.top();
}
int prec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infinixtoprifix(string s)
{
    stack<int> st;
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] <= 'a' && s[i] >= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (st.empty() && st.top() == '(')
            {
                res += st.top();
                st.pop();
            }
        }
    }
}

string profixtopostfix(string s)
{
    string str;
    stack<string> st;
    for (int i = s.length(); i >= 0; i--)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            string toprifix = op1 + op2 + s[i];
            st.push(toprifix);
        }
        else
        {
            // st.push(s[i] - '0');
            st.push(string(1, s[i]));
        }
    }

    return st.top();
}

int main()
{

    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top() << endl;

    string s = "( )[ { } (  ]";

    // cout << balance(s);

    // cout << prifix("-+7*45+20");
    // cout << prifixtoinfinx("/-ab+-cde");
    profixtopostfix("/A+BC");
    return 0;
}