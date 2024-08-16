#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<string, string>, vector<int>> m; // as like first name last name tar coresponding onek int value
    // set diyew same kora jay map er moton
    // pair<int ,int>p1,p2;
    // p1={2,2};
    // p2={2,3};
    // cout<< (p1<p2);// lexographically
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string fn, ln;
        int ct;
        cin >> fn >> ln >> ct;
        for (int j = 0; j < ct; j++)
        {
            int x;
            cin >> x;
            m[{fn, ln}].push_back(x);
        }
    }
    cout<< "output   "<<endl;
    for (auto &pr : m)
    {
        auto &fullname = pr.first; // pair
        auto &list = pr.second;    // vector
        cout << fullname.first << " " << fullname.second << endl;
        cout << fullname.first << " " << fullname.second << endl;
        cout << list.size() << endl;
        for (auto &element : list)
        {
            cout << element << " ";
        }

        cout << endl;
    }
}