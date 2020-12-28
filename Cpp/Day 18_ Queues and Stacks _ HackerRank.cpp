#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
    stack<int> st;
    queue<int> q;

    void pushCharacter(char ch)
    {
        st.push(ch);
    }

    void enqueueCharacter(char ch)
    {
        q.push(ch);
    }
    char popCharacter() 
    {
        char top=st.top();
        st.pop();
        return top;
    }

    char dequeueCharacter()
    {
        char front=q.front();
        q.pop();
        return front;
    }
};

