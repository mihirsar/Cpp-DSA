#include <bits/stdc++.h>
using namespace std;

bool knows(vector<vector<int>> &M, int a, int b, int n)
{
    if (M[a][b] == 1)
        return true;
    return false;
}

// Function to find if there is a celebrity in the party or not.
int celebrity(vector<vector<int>> &M, int n)
{
    // code here
    stack<int> st;
    // step1 push all ele in stack
    for (int i = 0; i < n; i++)
        st.push(i);
    // step2
    while (st.size() > 1)
    {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();
        if (knows(M, a, b, n))
            st.push(b);
        else
        {
            st.push(a);
        }
    }
    int candidate = st.top();
    // step3 1 ele in stack is potential celebrity so verify it
    bool rowCheck = false;
    int zeroCnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[candidate][i] == 0)
            zeroCnt++;
    }
    if (zeroCnt == n)
        rowCheck = true;

    bool ColCheck = false;
    int oneCnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[i][candidate] == 1)
            oneCnt++;
    }
    if (oneCnt == n - 1)
        ColCheck = true;

    if (rowCheck == true && ColCheck == true)
        return candidate;
    return -1;
}

int main()
{

    return 0;
}