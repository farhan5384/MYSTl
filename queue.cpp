#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> s;
   
    s.push("abc");
    s.push("cde");
    s.push("efg");
    s.push("hgf");
    s.push("cbv");
    s.push("bhf");


    while (!s.empty())
    {
       cout<<s.front()<<endl;
       s.pop();
    }
    
}
