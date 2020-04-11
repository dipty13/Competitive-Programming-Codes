#include<bits/stdc++.h>
using namespace std;
class MinStack
{
public:
    /** initialize your data structure here. */
    stack<int> st;
    stack<int> mn;
    MinStack()
    {

    }

    void push(int x)
    {
        st.push(x);
        if(mn.empty() || x <= mn.top())
        {
            mn.push(x);
        }
    }

    void pop()
    {
        if(!st.empty() && !mn.empty() && mn.top() == st.top())
            mn.pop();
        st.pop();
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return mn.top();
    }
};
int main()
{
    MinStack* obj = new MinStack();
    obj->push(-2);
    obj->push(3);
    obj->push(1);
    obj->pop();
    int param_3 = obj->top();
    int param_4 = obj->getMin();
    cout << param_4 << endl;
    return 0;
}
