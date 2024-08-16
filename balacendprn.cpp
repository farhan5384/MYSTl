#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cin >> p;
    stack<char> s;

    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == '(' || p[i] == '{' || p[i]=='[')
        {
            s.push(p[i]);
        }
        else if (p[i] == ')' || p[i]=='}' || p[i]==']')
        {
            if (!s.empty() && ( s.top() == '(' ) &&p[i] == ')')
            {
                s.pop();
            }
            else if (!s.empty() && ( s.top() == '{' ) && p[i]=='}')
            {
               s.pop();
            }
              else if (!s.empty() && ( s.top() == '[' ) && p[i]==']')
            {
               s.pop();
            }
            
            else if (s.empty())
            {
                cout << "not a balanced parenthesis";
                return 0;
            }
        }
    }
    if (s.empty())
    {
        cout << "balanced parathesis";
    }
    else
    {
        cout << "not a balanced parenthesis";
    }
}